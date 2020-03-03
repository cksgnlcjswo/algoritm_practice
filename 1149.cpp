#include <iostream>

using namespace std;

int d[1001][3];
int rgb[1001][3];

int Min(int a,int b)
{
	return a>b?b:a;
}
int main(void)
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<3;j++)
			cin>>rgb[i][j];
	}
	d[0][1]=d[0][2]=d[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		d[i][0]=Min(d[i-1][1],d[i-1][2])+rgb[i][0];
		d[i][1]=Min(d[i-1][0],d[i-1][2])+rgb[i][1];
		d[i][2]=Min(d[i-1][0],d[i-1][1])+rgb[i][2];
	}
	cout<<Min(Min(d[n][0],d[n][1]),d[n][2]);
}
