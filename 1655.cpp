#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;

	priority_queue<int> pq1;
	priority_queue<int,vector<int>,greater<int> > pq2;
	for(int i=0;i<n;i++) {
		int tmp,size;
		cin>>tmp;

		pq1.push(tmp);
		size=pq1.size()/2;

		while(size--) {
			int temp=pq1.top();
			pq1.pop();
			pq2.push(temp);
		}
		cout<<pq1.top()<<'\n';
		while(!pq2.empty()){
		pq1.push(pq2.top());
		pq2.pop();
		}	
	}
}
