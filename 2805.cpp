#include <iostream>
#define MAX 2000000000
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	long long arr[100000];	
	int n;
	long long m,left=0,right=MAX,sum,mid,max=0;
	
	cin>>n>>m;

	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	while(left<=right) {
		sum=0;
		mid=(right+left)/2;
		for(int i=0;i<n;i++) {
			if(arr[i]<mid)
				continue;
			sum+=(arr[i]-mid);
		}
		
		if(sum>=m) {
		left=mid+1;
			if(max<mid)
				max=mid;
		}
		else
		right=mid-1;
	}
cout<<max;
}
