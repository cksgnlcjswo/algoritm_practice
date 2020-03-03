#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100000];

int main(void)
{
	cin.tie(NULL);

ios_base::sync_with_stdio(false);
	int n,m,right,left,middle;
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	cin>>m;

	sort(v.begin(),v.end());
	
	for(int j=0;j<m;j++)
		cin>>arr[j];

	for(int i=0;i<m;i++) {
		left=0; right=n-1;
	int flag=0;
		
		while(right>=left){
			middle=(left+right)/2;
			if(v[middle]>arr[i])
			right=middle-1;
			else if(v[middle]<arr[i])
			left=middle+1;
			else{
			flag=1;
			break;
			}
		}
		if(flag)
		cout<<"1"<<'\n';
		else
		cout<<"0"<<'\n';
	}

}
