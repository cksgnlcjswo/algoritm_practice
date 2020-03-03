#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	queue<int> q;
	for(int i=0;i<n;i++) 
		q.push(i+1);

	while(q.size()!=1) {
		int tmp;
		q.pop();
		tmp=q.front();
		q.pop();
		q.push(tmp);
	}
	cout<<q.front();

}
