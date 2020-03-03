#include <iostream>

using namespace std;

int dp[1001][1001];
int max(int a,int b)
{
	return a>b?a:b;
}
int main(void)
{
	string str1;
	string str2;
	int a,b;

	cin>>str1>>str2;
	a=str1.length();
	b=str2.length();

	for(int i=0;i<=a;i++) {
		for(int j=0;j<=b;j++) {
			if(i==0||j==0)
				dp[i][j]=0;
			else if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[a][b];
}
