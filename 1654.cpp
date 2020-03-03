#include <iostream>

using namespace std;

int arr[10000];
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n,k;
	long long right,mid,left=0,ans=0,cnt=0;
	cin>>n>>k;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	right=arr[0];

	for(int i=0;i<n;i++)
		if(arr[i]>right)
			right=arr[i];

	while(right>=left) {
		cnt=0;
	mid=(right+left)/2;
		for(int i=0;i<n;i++)
			cnt+=arr[i]/mid;
		if(cnt<k)
		right=mid-1;

		else {
		if(ans<mid)
		ans=mid;
		left=mid+1;	
		}
	}
	cout<<ans;
}
