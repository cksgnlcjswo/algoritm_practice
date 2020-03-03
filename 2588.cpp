#include <iostream>

using namespace std;

int main(void)
{
	int a,b,c,d,e;

	cin>>a>>b;

	c=a*(b%10);
	d=a*((b/10)%10);
	e=a*(b/100);

	cout<<c<<endl<<d<<endl<<e<<endl<<a*b;
}
