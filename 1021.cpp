#include <iostream>
#include <deque>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,m,cnt=0;
	cin>>n>>m;
	deque<int> d;
	vector<int> v;
	for(int i=1;i<=n;i++) 
		d.push_back(i);
	for(int i=0;i<m;i++){
		int t;
		cin>>t;
		v.push_back(t);
	}

	for(int i=0;i<m;) {
		if(v[i]==d.front()){
			d.pop_front();
			i++;
		}
		else {
		int lcnt=0;
		int rcnt=0;

		for(auto it=d.begin();it!=d.end();it++){
		if(*it!=v[i])
		rcnt++;
		else break;
		}
		for(auto it=d.rbegin();it!=d.rend();it++) {
		if(*it!=v[i])
		lcnt++; 
		else break;
		}
		if(rcnt<=lcnt) {
			int tmp=d.front();
			d.pop_front();
			d.push_back(tmp);
			cnt++;
		}
		else {
			int tmp=d.back();
			d.pop_back();
			d.push_front(tmp);
			cnt++;
		}
		}
	}
	cout<<cnt;
}
