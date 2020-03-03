#include <iostream>
#include <queue>
using namespace std;
bool visited[1001];
int arr[1001][1001];

int n;

void DFS(int beginx)
{
		for(int j=1;j<=n;j++) {
		if(arr[beginx][j]) {	
		if(!visited[j]) {
		visited[j]=true;
		cout<<j<<' ';
		DFS(j);
		}
		}
	}
}

void BFS(int beginx)
{
	queue<int> q;
	q.push(beginx);
	visited[beginx]=true;

	while(!q.empty()) {
		cout<<q.front()<<' ';
		int tmp=q.front();
		q.pop();
		
		 for(int j=1;j<=n;j++) {
		  if(arr[tmp][j]) {
		   if(!visited[j]) {
			visited[j]=true;
			q.push(j);
		   }
		  }
		 }		
	}
}

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int m,beginx;
	cin>>n>>m>>beginx;

	for(int i=0;i<m;i++) {
		int tmp1,tmp2;
		cin>>tmp1>>tmp2;
		arr[tmp1][tmp2]=1;
		arr[tmp2][tmp1]=1;
	}
	cout<<beginx<<' ';
	visited[beginx]=true;
	DFS(beginx);
	cout<<'\n';

	for(int i=1;i<=1000;i++)
		visited[i]=false;
	BFS(beginx);
}
