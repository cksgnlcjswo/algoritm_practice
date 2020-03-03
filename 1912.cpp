#include <iostream>

using namespace std;
int arr[100001];
int dp[100001];
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n,max;
	cin>>n;

	for(int i=1;i<=n;i++)
	cin>>arr[i];

	dp[1]=arr[1];
	for(int i=2;i<=n;i++) {
		if(dp[i-1]+arr[i]>arr[i])
			dp[i]=dp[i-1]+arr[i];
		else
			dp[i]=arr[i];
	}

	max=dp[1];

	for(int i=1;i<=n;i++)
		if(max<dp[i])
			max=dp[i];

	cout<<max;
}
