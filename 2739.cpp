#include <iostream>

using namespace std;

int main(void)
{
	int i;

	cin>>i;

	for(int j=1;j<10;j++)
	{
		cout<<i<<' '<<'*'<<' '<<j<<' '<<'='<<' '<<i*j;
		cout<<'\n';
	}
}
