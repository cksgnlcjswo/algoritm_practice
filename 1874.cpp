#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int arr[100000];
int main(void)
{
	int n,idx=0,num=1;
	vector<char> c;
	cin>>n;
	stack<int> s;
	for(int i=0;i<n;i++) 
	cin>>arr[i];

	for(;num<=n;) {
	while(num!=arr[idx]&&num<=n) {
		s.push(num);
		num++;
		c.push_back('+');
	}
	if(num<=n){
	s.push(num);
	num++;
	c.push_back('+');
	}	
	while(arr[idx]==s.top()){
		s.pop();
		c.push_back('-');
		idx++;
		if(s.empty())
			break;
	}	
	
	}

	if(!s.empty())
	cout<<"NO";
	else {
	for(int k=0;c[k]!=0;k++)
	       cout<<c[k]<<'\n';	
	}
}
