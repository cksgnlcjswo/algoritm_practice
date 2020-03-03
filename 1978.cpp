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
	int num;
	cin>>num;
	int cnt=0;
	int *number=new int[num];

	for(int i=0;i<num;i++){
		cin>>number[i];
		if(check(number[i]))
			cnt++;
	}
	cout<<cnt;
	
	}
