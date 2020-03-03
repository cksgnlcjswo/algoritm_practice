#include <iostream>
#include <queue>

using namespace std;

int m,n,cnt,zero_cnt,h;
int arr[100][100][100];
bool visited[100][100][100];
int ans[100][100][100];
typedef struct r {
	int x;
	int y;
	int h;
} r;
queue<r> q;

void BFS(void)
{
	int dx[6]={0,1,0,-1,0,0};
	int dy[6]={1,0,-1,0,0,0};
	int dh[6]={0,0,0,0,1,-1};

	while(!q.empty()) {
	int tmp1=q.front().x;
	int tmp2=q.front().y;
	int tmp3=q.front().h;

	if(!zero_cnt) return;	
	q.pop();
	  for(int i=0;i<6;i++) 
	   if(tmp1+dx[i]>=0&&tmp1+dx[i]<m&&tmp2+dy[i]>=0&&tmp2+dy[i]<n&&tmp3+dh[i]>=0&&tmp3+dh[i]<h)
            if(!visited[tmp2+dy[i]][tmp1+dx[i]][tmp3+dh[i]]&&arr[tmp2+dy[i]][tmp1+dx[i]][tmp3+dh[i]]==0) {
    		    arr[tmp2+dy[i]][tmp1+dx[i]][tmp3+dh[i]]=1;
		    cnt=ans[tmp2+dy[i]][tmp1+dx[i]][tmp3+dh[i]]=ans[tmp2][tmp1][tmp3]+1;
		    visited[tmp2+dy[i]][tmp1+dx[i]][tmp3+dh[i]]=true;
		    r tmp;
		    tmp.x=tmp1+dx[i]; tmp.y=tmp2+dy[i]; tmp.h=tmp3+dh[i];
		    q.push(tmp);
		    zero_cnt--;
	    }
	}
}

int main(void)
{
	cin>>m>>n>>h;
	
	for(int k=0;k<h;k++)
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++) 
	  cin>>arr[i][j][k];

	for(int k=0;k<h;k++) 
	 for(int i=0;i<n;i++) {
		 for(int j=0;j<m;j++)
			 if(arr[i][j][k]==1) {
				r tmp;
			       tmp.x=j; tmp.y=i; tmp.h=k;	
				 q.push(tmp);
				 visited[i][j][k]=true;
			 }
	 		else if(arr[i][j][k]==0)
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
