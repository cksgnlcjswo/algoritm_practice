#include <iostream>
#include <cstdio>

using namespace std;
int arr[10001];

int main(void)
{
	int n;
	scanf("%d",&n);
	int tmp,i,j;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		arr[tmp]++;
	}
	for(i=1;i<10001;i++)
	{
	for(j=0;j<arr[i];j++)
		printf("%d\n",i);
	}

}
