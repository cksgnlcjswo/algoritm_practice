#include <iostream>
#define swap(x,y) {int t=x; x=y; y=t;}
using namespace std;

int main(void)
{
	int t;
	cin>>t;
	int arr[1000];
	int flag=0;
	for(int i=0;i<t;i++)
		cin>>arr[i];
	for(int i=1;i<t;i++)
	{
		for(int j=0;j<t-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag=1;
			}
		}
		if(!flag)
			break;
	}

	for(int i=0;i<t;i++)
		cout<<arr[i]<<'\n';
}
