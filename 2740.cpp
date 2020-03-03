#include <iostream>

int res[100][100];
int a[100][100];
int b[100][100];

using namespace std;

int main(void)
{
	int m,n,k;
	cin>>n>>m;
	
	for(int i=0;i<n;i++) 
	 for(int j=0;j<m;j++)
	  cin>>a[i][j];
	
	cin>>m>>k;

	for(int i=0;i<m;i++)
	 for(int j=0;j<k;j++)
	  cin>>b[i][j];

	for(int i=0;i<n;i++) {
	 for(int j=0;j<k;j++) {
	   for(int c=0;c<m;c++) {
		res[i][j]+=a[i][c]*b[c][j];
	   }
	 }
	}

	for(int i=0;i<n;i++){
	 for(int j=0;j<k;j++) {
		cout<<res[i][j]<<' ';
	 }
	cout<<'\n';
	}	
}
