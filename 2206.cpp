#include <iostream>
#include <queue>
using namespace std;

bool flag;
bool visited[1000][1000];
int arr[1000][1000];
int ans[1000][1000];
int m,n;
queue<pair<int,int>> q;

int DFS(void)
{
	q.push(make_pair(0,0));
	visited[0][0]=true;
	ans[0][0]=1;
	int prex,prey;
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};

	while(!q.empty()) {
		int x=q.front().first;
		int y=q.front().second;
		q.pop(); 
		if(arr[y][x]) flag=false;
		if(x==m-1&&y==n-1) return 1;
		for(int i=0;i<4;i++) {
		int tmp1=x+dx[i];
		int tmp2=y+dy[i];

		if(tmp1>=0&&tmp1<m&&tmp2>=0&&tmp2<n) {
			if(!visited[tmp2][tmp1]&&!arr[tmp2][tmp1]) {
			 q.push(make_pair(tmp2,tmp1));
			 visited[tmp2][tmp1]=true;
			 ans[tmp2][tmp1]=ans[y][x]+1;
			}
			else if(!visited[tmp2][tmp1]&&arr[tmp2][tmp1]) {
			 if(!flag) {		//can break one block
			  q.push(make_pair(tmp2,tmp1));
			  ans[tmp2][tmp1]=ans[y][x]+1;
			  visited[tmp2][tmp1]=true;
			  flag=true;		  
			 }			 
			}
		}
		}	
	}
return 0;
}

int main(void)
{
	cin>>n>>m;

	for(int i=0;i<n;i++) {
		string tmp;
		cin>>tmp;
		for(int j=0;j<m;j++)
			arr[i][j]=tmp[j]-'0';
	}

	if(DFS())
		cout<<ans[n-1][m-1];
	else
		cout<<"-1";
}
