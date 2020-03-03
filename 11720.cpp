#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	int cnt,count=0,sum=0;
	char a[101];
	
	cin>>cnt;
	cin>>a;

	while(count!=cnt)
	{
		sum+=a[count]-'0';
		count++;
	}
	cout<<sum;
}
