#include <iostream>

using namespace std;

int main(void)
{
	int num;
	int cnt=1;
	int sum=1;
	int x;
	int y;
	cin>>num;

	while(num>sum)
	{
		for(int i=0;i<cnt;i++)
			sum+=4;
		cnt++;
	}
	x=cnt; y=cnt;

	if(num==sum)
	{
		cout<<x<<"/"<<y;
		return 0;
	}
	while(y!=1)
	{
		x++; y--; sum--;
		if(sum==num)
			cout<<x<<"/"<<y;
	}
	x--; 
	sum--;
	if(sum==num)
		cout<<x<<"/"<<y;
	while(x!=1)
	{
	x--; y++; sum--;
	if(sum==num)
		cout<<x<<"/"<<y;
	}	
y--; sum--;
	if(sum==num)
		cout<<x<<"/"<<y;
	while(x!=cnt-1)
	{
	x++;y--; sum--;
	if(sum==num)
		cout<<x<<"/"<<y;
	}
}
