#include <iostream>

using namespace std;

int main(void)
{
	float a,b,v;
	float cnt;
	cin>>a>>b>>v;

	cnt=v/(a-b);
	cnt=(int)cnt;
	if(cnt*a-cnt*b>=v)
		cnt--;

	cout<<cnt;
}
