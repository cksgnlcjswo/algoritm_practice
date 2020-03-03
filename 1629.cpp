#include <iostream>

using namespace std;

long long int a,b;
int c;
long long int tmp;

long long int divide(int cnt)
{
	if(cnt==0) return 1;
	if(cnt==1)
		return a;

	if(cnt%2==0)
		return ((divide(cnt/2))%c*(divide(cnt/2))%c)%c;
	else
		return ((divide(cnt/2))%c*(divide(cnt/2))%c*a)%c;
}

int main(void)
{
	long long int ans;
	cin>>a>>b>>c;
	
	ans=divide(b);
	cout<<ans%c;
}
