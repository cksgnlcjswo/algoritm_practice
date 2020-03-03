#include <iostream>
#define REMINDER 1000000000
using namespace std;

long long int dp[101][101];
int main(void)
{
	long long int n,sum=0;
	cin>>n;

	for(int i=1;i<=9;i++)
		dp[1][i]=1;

	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=9;j++)
		{
			if(j==0)
				dp[i][j]=dp[i-1][1]%REMINDER;
			else if(j==9)
				dp[i][j]=dp[i-1][8]%REMINDER;
			else
				dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%REMINDER;
		}
	}
	
	for(int i=0;i<10;i++)
		sum+=dp[n][i]%REMINDER;
cout<<sum%REMINDER;
}
