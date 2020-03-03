#include <iostream>

using namespace std;

int check(int n)
{
	if(n<2)
		return 0;
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
	int num1,num2;
	cin>>num1>>num2;
	bool *prime=new bool[num2+1];
	for(int i=2;i<=num2;i++)
		prime[i]=true;
	for(int i=2;i<=num2;i++)
	{
		if(prime[i])
		{
		for(int j=i+i;j<=num2;j+=i)
		prime[j]=false;
		}
	}
	for(int i=num1;i<=num2;i++){
		if(prime[i])
			cout<<i<<'\n';
				}
}
	
