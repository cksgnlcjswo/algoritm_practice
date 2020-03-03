/* algoritm practice on 2020-03-03 by cksgnlcjswoo@naver.com*/
#include <iostream>

using namespace std;
int a[100];

int gcd(int a,int b)
{
	int min=(a>b?b:a);

	for(int i=min;i>1;i--) {
		if(a%i==0&&b%i==0)
			return i;
	}
}
int main(void)
{
int n,first;
cin>>n;

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=1;i<n;i++) {
		int tmp=gcd(a[0],a[i]);
		cout<<a[0]/tmp<<'/'<<a[i]/tmp<<'\n';
	}
	
}
