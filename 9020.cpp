#include <iostream>
using namespace std;

int check(int n)
{
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
		return 0;
	}
	return 1;
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int num,tmp1;
		cin>>num;
		tmp1=num/2;
		for(int i=tmp1;i>1;i--)
		{
			if(check(i))
			{
				if(check(num-i))
				{
				cout<<i<<' '<<num-i<<'\n';
				break;
				}
			}

		}
	}
}
