#include <iostream>

using namespace std;
int coin[10];
int main(void) {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n,k,cnt=0,tmp;
	cin>>n>>k;
	tmp=k;
	for(int i=0;i<n;i++)
		cin>>coin[i];
	
	for(int i=n-1;i>-1;i--){
		if(coin[i]<=tmp)
		{
			cnt+=(tmp/coin[i]);
			tmp%=coin[i];
		}
	}
cout<<cnt;

	
}
