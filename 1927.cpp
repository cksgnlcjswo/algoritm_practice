#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	priority_queue<int,vector<int>,greater<int> > pq;
	int n;
	cin>>n;

	for(int i=0;i<n;i++) {
	int tmp;
	cin>>tmp;

		if(tmp) 
		pq.push(tmp);	
		
		else{
		 if(pq.empty())
			 cout<<'0'<<'\n';
		 else{
			cout<<pq.top()<<'\n';
			pq.pop();
		 }
			 
		}
	}
}
