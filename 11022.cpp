#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		cout<<"Case #"<<i+1<<':'<<' '<<a<<' '<<'+'<<' '<<b<<' '<<'='<<' '<<a+b<<'\n';
		
	}
}
