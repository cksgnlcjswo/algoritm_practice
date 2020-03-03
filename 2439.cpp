#include <iostream>

using namespace std;

int main(void)
{
	int num;
	cin>>num;

	for(int i=1;i<=num;i++)
	{
		for(int k=0;k<num-i;k++)
			cout<<' ';
		for(int j=1;j<=i;j++)
			cout<<'*';
		cout<<'\n';
	}
}
