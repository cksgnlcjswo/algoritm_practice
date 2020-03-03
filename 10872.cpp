#include <iostream>

using namespace std;

int factorial(int a)
{
	if(a==0)
		return 1;
	if(a==1)
		return 1;
	else
		return a*factorial(a-1);
}

int main(void)
{
	int n,answer;
	cin>>n;

	answer=factorial(n);
	cout<<answer;
}
