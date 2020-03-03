#include <iostream>
using namespace std;

int n,m;
int arr[9];
bool visited[9];

void combination(int cnt,int idx)
{
	if(m==cnt)
	{
		for(int i=0;i<m;i++)
			cout<<arr[i]<<' ';
		cout<<'\n';
		return;
	}
	
	for(int i=idx;i<=n;i++)
	{
		if(!visited[i])
		{
			visited[i]=true;
			arr[cnt]=i;
			combination(cnt+1,i+1);
			visited[i]=false;
		}
	}
}

int main(void)
{
	cin>>n>>m;
	combination(0,1);
}



