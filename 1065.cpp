#include <iostream>

using namespace std;

int IsHan(int i)
{
	if(i==1000) return 0;
	int num[3];
	int k=0;
	while(i!=0)
	{
		num[k++]=i%10;
		i/=10;
	}	

	if((num[0]-num[1])==(num[1]-num[2]))
	return 1;

	return 0;
}

int main(void)
{
	int n,cnt;
	cin>>n;

	if(n<100){
		cout<<n;
		return 0;
	}
	else{
		cnt=99;
		for(int i=100;i<=n;i++)
		{
			if(IsHan(i))
			cnt++;	
		}
	}
	cout<<cnt;
}
