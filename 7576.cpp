#include <iostream>
#include <queue>

using namespace std;

int m,n,cnt,zero_cnt;
int arr[1000][1000];
bool visited[1000][1000];
int ans[1000][1000];

queue<pair<int, int>> q;

void BFS(void)
{
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	
	while(!q.empty()) {
	int tmp2=q.front().first;
	int tmp1=q.front().second;
	if(!zero_cnt) return;	
	q.pop();
	  for(int i=0;i<4;i++) 
	   if(tmp1+dx[i]>=0&&tmp1+dx[i]<m&&tmp2+dy[i]>=0&&tmp2+dy[i]<n)
            if(!visited[tmp2+dy[i]][tmp1+dx[i]]&&arr[tmp2+dy[i]][tmp1+dx[i]]==0) {
    		    arr[tmp2+dy[i]][tmp1+dx[i]]=1;
		    cnt=ans[tmp2+dy[i]][tmp1+dx[i]]=ans[tmp2][tmp1]+1;
		    visited[tmp2+dy[i]][tmp1+dx[i]]=true;
		    q.push(make_pair(tmp2+dy[i],tmp1+dx[i]));
		    zero_cnt--;
	    }
	}
}

int main(void)
{
	cin>>m>>n;
	int max;
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++) 
	  cin>>arr[i][j];

	 for(int i=0;i<n;i++) {
		 for(int j=0;j<m;j++)
			 if(arr[i][j]==1) {
				 q.push(make_pair(i,j));
				 visited[i][j]=true;
			 }
	 		else if(arr[i][j]==0)
				zero_cnt++;
	 }
	 if(!zero_cnt) {
		cout<<'0';
		return 0;
	 }
	 else
		 BFS();
	 
	if(zero_cnt)		//remained zero in arr
		cout<<"-1";
	else 
		cout<<cnt;
}
