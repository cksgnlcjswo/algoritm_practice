#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct a {
int value;
 a(int b) :value(b){}
};

struct cmp{
 bool operator()(a t,a u){
	 if(abs(t.value)==abs(u.value))
		 return t.value>u.value;
	else
		return abs(t.value)>abs(u.value);
 }	
};
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	priority_queue<a,vector<a>,cmp> pq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
	int tmp;
		cin>>tmp;

		if(tmp) 
		pq.push(a(tmp));	
		
		else{
		 if(pq.empty())
			 cout<<'0'<<'\n';
		 else{
			cout<<pq.top().value<<'\n';
			pq.pop();
		 }
			 
		}
	}
}
