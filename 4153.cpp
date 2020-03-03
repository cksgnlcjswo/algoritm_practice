#include <iostream>

using namespace std;
int find_max(int *arr)
{
	int max=arr[0];
	for(int i=0;i<3;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}
int fita(int *num)
{
	int max=find_max(num);
	int sum=0;
	for(int i=0;i<3;i++)
	{
		if(max==num[i])
			num[i]=0;
	}

	for(int i=0;i<3;i++)
		sum+=num[i]*num[i];
	if(max*max==sum)
		return 1;
	else
		return 0;
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int num[3];
	while(1)
	{
	for(int i=0;i<3;i++)
	cin>>num[i];
	if(num[0]==0&&num[1]==0&&num[2]==0)
	break;

	if(fita(num))
		cout<<"right"<<'\n';
	else
		cout<<"wrong"<<'\n';
	}
}
