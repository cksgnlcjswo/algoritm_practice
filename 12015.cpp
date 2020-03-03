#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n,ans=0;
	cin>>n;

	vector<int> v;
	v.push_back(-10000);

	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num>v.back()){
			v.push_back(num);
			ans++;
		}
		else {
			int left=1,right=v.size(),mid,min=0;
		while(left<=right) {
			mid=(left+right)/2;
			if(v[mid]>=num){
				right=mid-1;
				min=mid;
			}
			else
				left=mid+1;
		}
		v[min]=num;
		}
	}
	cout<<ans;
}
