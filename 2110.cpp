#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n,c;
	long long left,right,ans=0,mid,cnt;
	cin>>n>>c;
	vector<long long> x;
	for(int i=0;i<n;i++) {
		int tmp;
		cin>>tmp;
		x.push_back(tmp);
	}
	sort(x.begin(),x.end());
	
	left=0;
	right=1000000000;

	while(left<=right) {
		cnt=1;
		mid=(left+right)/2;
		if(mid>x[n-1]) {
			right=mid-1;
			continue;
		}
		else {
		for(int i=0;i<n;i++) {
			int temp=x[i];
			for(int j=i+1;j<n;j++) {
			if(x[j]-temp>=mid){
				cnt++;
				temp=x[j];
			}
			}
			break;
		}
			if(cnt>=c) {
			 if(ans<mid)
				 ans=mid;
			left=mid+1;
			}		
			else 
			right=mid-1;
		}
	}
cout<<ans;
}
