#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int arr[9];
bool visited[9];

void permutation(int cnt)
{
	if(cnt==m)
	{
		for(int i=0;i<m;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}

	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
		visited[i]=true;
		arr[cnt]=i;
		permutation(cnt+1);
		visited[i]=false;
		}
	}
}

int main(void)
{
	cin>>n>>m;

	permutation(0);
}
