#include <iostream>
#define REM 1000000007
using namespace std;

long long int Combination(int n,int k)
{
	long long int r=1;

	for(int i=1;i<=k;i++) 
	{
		r*=n--;
		r/=i;
	}
return r;
}

int main(void) 
{
	int n,k;
	cin>>n>>k;

	cout<<Combination(n,k)%REM;
}
