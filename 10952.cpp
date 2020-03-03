#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	do {
	cin>>a>>b;
	if(a==0&&b==0) break;
	cout<<a+b<<'\n';
	} while(1);
}
