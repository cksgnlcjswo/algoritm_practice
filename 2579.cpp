#include <iostream>

using namespace std;
int arr[302];
int dp[302];
int main(void)
{
	int n,cnt=0,i;
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>arr[i];
	if(n!=3){
	dp[1]=arr[1];
	cnt++;
	i=2;
	}
	else
	i=1;
		for(;i<=n;i++)
		{
			if(i+2==n&&cnt==1)
			{
				dp[i]=arr[i]+dp[i-1];
				dp[n]=dp[i]+arr[n];
				break;	
			}
			if(arr[i]>arr[i+1]&&cnt<2)		//foward one stair
			{
				cnt++;
				dp[i]=arr[i]+dp[i-1];
			}
			else
			{
			cnt=0;
			dp[i]=arr[i+1]+dp[i-1];
			dp[i+1]=dp[i];
			i++;
			cnt++;
			}
		}
	cout<<dp[n];
}
