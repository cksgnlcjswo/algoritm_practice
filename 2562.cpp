#include <iostream>

using namespace std;

int main(void)
{
	int num[9];
	int max,idx;
	for(int i=0;i<9;i++)
	{
		cin>>num[i];
	}
	max=num[0];
	idx=0;

	for(int i=0;i<9;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
			idx=i;
		}
	}
	cout<<max<<'\n'<<idx+1;
}
