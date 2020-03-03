#include <iostream>

using namespace std;

int check(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int num1,num2;
	cin>>num1>>num2;
	int sum=0,min=-1;

	for(int i=num1;i<=num2;i++){
		if(check(i)){
			if(min==-1)
				min=i;
			sum+=i;
		}
	}
	if(!sum)
	cout<<min;
	else
	cout<<sum<<'\n'<<min;
	
	}
