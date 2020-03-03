#include <iostream>

using namespace std;

long long int p[101]={100,1,1,1,2,2,};
long long int fadoban(int n)
{
	if(p[n])
		return p[n];
	else
		return p[n]=fadoban(n-1)+fadoban(n-5);

}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;

		cout<<fadoban(num)<<'\n';
	}
}
