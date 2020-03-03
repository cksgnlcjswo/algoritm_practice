#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n,k,idx=0;
	cin>>n>>k;
	queue<int> q;
	int ans[1000];

	for(int i=1;i<=n;i++)
		q.push(i);
	while(!q.empty()) {
		for(int i=0;i<k-1;i++) {
		int tmp=q.front();
		q.pop();
		q.push(tmp);
		}
	ans[idx++]=q.front();
	q.pop();
	}
	cout<<'<';
	for(int i=0;i<idx;i++){
	if(i<idx-1)
		cout<<ans[i]<<", ";
	else
		cout<<ans[i];
	}
	cout<<'>';
}
	


