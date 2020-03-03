#include <iostream>

using namespace std;

int dp[11][11];

int main(void)
{
	int n,k,i,j;
	cin>>n>>k;

	for(i=0;i<=n;i++) {
		for(j=0;j<=k;j++) {
			if(i==0||j==0||i==j){ 
				dp[i][j]=1;
				continue;
			}
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	cout<<dp[n][k];
}
