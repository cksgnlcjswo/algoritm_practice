#include <iostream>

using namespace std;

int main(void)
{
	long long mid,n,k,cnt=0,left=1,right=1000000000,ans=1000000001;
	cin>>n>>k;

	while(left<=right) {
		cnt=0;
		mid=(left+right)/2;
	
		if(mid>n*n) {
		right=mid-1;
		continue;
		}
	 for(int i = 1; i <= n; i++) cnt += n > mid / i ? mid / i : n;
	//get count less than mid in array

		if(cnt>=k){
			if(ans>mid)
			ans=mid;
			right=mid-1;
		}
		else
			left=mid+1;
	}
cout<<ans;
}
