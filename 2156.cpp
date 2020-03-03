#include <iostream>

using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}
int arr[10001];
int dp[10001];

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>arr[i];
	dp[1]=arr[1];
	dp[2]=arr[1]+arr[2];
	if(n>=3){
		for(int i=3;i<=n;i++)
		{
			int tmp=max(dp[i-2]+arr[i],dp[i-3]+arr[i]+arr[i-1]);
			dp[i]=max(tmp,dp[i-1]);
		}
	}
cout<<dp[n];
}
