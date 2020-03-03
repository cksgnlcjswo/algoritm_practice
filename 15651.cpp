#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int arr[8];

void permutation(int cnt)
{
	if(cnt==m)
	{
		for(int i=0;i<m;i++)
			printf("%d ",arr[i]);
		printf("\n");
		return;
	}

	for(int i=1;i<=n;i++)
	{
		arr[cnt]=i;
		permutation(cnt+1);
	}
}

int main(void)
{
	cin>>n>>m;

	permutation(0);
}
