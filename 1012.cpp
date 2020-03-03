#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cnt,m,n;
int arr[50][50];
bool visited[50][50];

void DFS(int x,int y)
{
	int cx[4]={-1,0,1,0};
	int cy[4]={0,-1,0,1};
	
	visited[x][y]=true;

	for(int i=0;i<4;i++) {
		int tmp1=x+cx[i];
		int tmp2=y+cy[i];

		if(tmp1>=0&&tmp1<n&&tmp2>=0&&tmp2<m) {
		 if(!visited[tmp1][tmp2]&&arr[tmp1][tmp2]==1) {
			DFS(tmp1,tmp2);
		 }
		}
	}
}

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--) {
	int k;
	memset(arr,0,sizeof(arr));
	memset(visited,0,sizeof(visited));
	cin>>m>>n>>k;

		for(int i=0;i<k;i++) {
			int tmp1,tmp2;
			cin>>tmp1>>tmp2;
			arr[tmp2][tmp1]=1;
		}
	cnt=0;

	for(int i=0;i<n;i++) 
		for(int j=0;j<m;j++)
			if(arr[i][j]==1&&visited[i][j]==0) {
			cnt++;
				DFS(i,j);
			}
	cout<<cnt<<'\n';
	}
}
