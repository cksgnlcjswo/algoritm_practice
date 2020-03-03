#include <iostream>
#include <queue>
using namespace std;

int n,m,cnt;
int arr[100][100];
bool visited[100][100];
int ans[100][100];

void BFS(int x,int y)
{
	queue<pair<int, int>> q;
	visited[y][x]=true;
	q.push(make_pair(x,y));
	ans[0][0]=1;
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};

	while(!q.empty()) {
	int tmp1,tmp2;
	tmp1=q.front().first;
        tmp2=q.front().second;
	q.pop();
	if(tmp1==m-1&&tmp2==n-1) return;

	 for(int i=0;i<4;i++) {
	int a=tmp1+dx[i];
	int b=tmp2+dy[i];
	 
	 if(a>=0&&a<m&&b>=0&&b<n) 
		 if(!visited[b][a]&&arr[b][a]) {
			visited[b][a]=true;
			 q.push(make_pair(a,b));
			 ans[b][a]=ans[b-dy[i]][a-dx[i]]+1;
		 }
	 }
	}	
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cin>>n>>m;

	for(int i=0;i<n;i++) {
		string tmp;
		cin>>tmp;
		for(int j=0;j<m;j++)
			arr[i][j]=tmp[j]-'0';
		}
	BFS(0,0);
cout<<ans[n-1][m-1];
}
