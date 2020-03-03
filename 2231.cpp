#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int i;
	int sum;
	int tmp;
	for(i=1;i<n;i++)
	{
		sum=0;
		sum=tmp=i;
		while(tmp!=0)
		{
		sum+=tmp%10;
		tmp/=10;
		}
	if(sum==n){
	cout<<i;
	return 0;
	}		
	
	}
cout<<0;

}
