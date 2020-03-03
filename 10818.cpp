#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int *num=new int[n];
	for(int i=0;i<n;i++)
		cin>>num[i];
	int max=num[0];
	int min=num[0];

	for(int i=0;i<n;i++)
	{
		if(num[i]>max)
			max=num[i];
		if(num[i]<min)
			min=num[i];
	}
cout<<min<<' '<<max;

}
