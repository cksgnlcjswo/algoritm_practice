#include <iostream>

using namespace std;

int main(void)
{
	int num[100];
	int n,m;
	int i,j,k;
	int sum,tmp;
	cin>>n>>m;

	for(i=0;i<n;i++)
		cin>>num[i];
	int answer=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				sum=num[i]+num[j]+num[k];
				if((m-sum)<(m-answer)&&sum<=m)
				answer=sum;
			}
		}
	}
	cout<<answer;
}
