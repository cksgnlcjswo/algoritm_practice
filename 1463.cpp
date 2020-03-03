#include <iostream>

using namespace std;

int dp[1000000];
int min(int a,int b)
{
	return a>=b?b:a;
}
int main(void)
{
	int n;
	cin>>n;
	int cnt;
	dp[2]=1;
	dp[3]=1;
	
	for(int i=4;i<=n;i++)
	{
		int tmp=i;
		cnt=0;
		
		if(tmp%3==0){
			cnt++;
			int ctmp;
			if(tmp%2==0)
			ctmp=min(dp[tmp/3],min(dp[tmp/2],dp[tmp-1]));
			else
			ctmp=min(dp[tmp/3],dp[tmp-1]);
			cnt+=ctmp;
		}
		else if(tmp%2==0){
			int ctmp;
			cnt++;
		ctmp=min(dp[tmp/2],dp[tmp-1]);
			cnt+=ctmp;		
		}

		else
		{
			cnt++;
			cnt+=dp[tmp-1];
		}
	
	dp[i]=cnt;
	}
	cout<<dp[n];
}
