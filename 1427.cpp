#include <iostream>

using namespace std;

int main(void)
{
	int digit=0;
	int n;
	int num[11];
	int i,j;
	int temp;
	cin>>n;

	while(n!=0)
	{
		num[digit++]=n%10;
		n/=10;
	}
	
	for(i=1;i<digit;i++)
	{
	for(j=0;j<digit-i;j++)
	{
		if(num[j]<num[j+1])
		{
			temp=num[j];
			num[j]=num[j+1];
			num[j+1]=temp;
		}
	}
	}

	for(int i=0;i<digit;i++)
		cout<<num[i];
}
