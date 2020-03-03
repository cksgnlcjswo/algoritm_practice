#include <iostream>

using namespace std;

int dp[501][501];
int arr[501][501];

int Max(int a,int b)
{
	return a>b?a:b;
}
int main(void)
{
	int n;
	cin>>n;
	int answer;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>arr[i][j];
		}
	}
	dp[1][1]=arr[1][1];	
	if(n>1){
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1)
			dp[i][j]=dp[i-1][1]+arr[i][1];
			else if(i==j)
			dp[i][j]=dp[i-1][j-1]+arr[i][j];
			else
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+arr[i][j];
		}
	}
	}
	answer=dp[n][1];
	for(int i=2;i<=n;i++)
	{
		if(answer<dp[n][i])
			answer=dp[n][i];
	}

	cout<<answer;
}
