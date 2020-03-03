#include <iostream>

using namespace std;

bool visited[101];
int arr[101][101];
int cnt;
int n;

void DFS(int x)
{
	for(int i=1;i<=n;i++)
	{
		if(arr[x][i]) 
		if(!visited[i]){
			visited[i]=true;
			cnt++;
			DFS(i);
		}
		
	}
}

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int pair;
	cin>>n>>pair;

	for(int i=0;i<pair;i++)
	{
		int tmp1,tmp2;
		cin>>tmp1>>tmp2;
		arr[tmp1][tmp2]=1;
		arr[tmp2][tmp1]=1;
	}
	visited[1]=true;
	DFS(1);
cout<<cnt;
}
