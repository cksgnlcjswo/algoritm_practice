#include <iostream>

using namespace std;
bool arr[10000001];

int find_prime(int n)
{
	for(int i=2;i<=n/2;i++) {
		if(arr[i]) {		// is i a prime number?
		 if(n%i==0)
		 return i;	 
		}
	}
	return n;
}

int main(void)
{
	int n,tmp;
	cin>>n;

	for (int j=2;j<=10000000;j++)
		arr[j] =true;

	for (int i=2;i*i<=10000000;i++)
	{
		if (arr[i])
			for (int j = i * i; j <= n; j += i)
			    arr[j] = false;
	}
	
	while(n!=1) {
		tmp=find_prime(n);
		cout<<tmp<<'\n';
		n/=tmp;
	}
}
