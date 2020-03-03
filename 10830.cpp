#include <iostream>
#define REM 1000
using namespace std;

long long arr[5][5];
long long tmp[5][5];
int n;

void multiply(long long a[5][5],long long b[5][5])
{
        int temp[5][5]={0};
        for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                        for(int k=0;k<n;k++) 
                        temp[i][j]+=(a[i][k]*b[k][j])%REM;	
                }
        }

	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
		 tmp[i][j]=temp[i][j]%REM;
}

void power(long long cnt)
{
	if(cnt==1)
		return;
	power(cnt/2);
	multiply(tmp,tmp);
	if(cnt%2==1)
		multiply(tmp,arr);
}

void print(void)
{
	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
		 cout<<tmp[i][j]%REM<<' ';
	}
	cout<<'\n';
	}
}
int main(void)
{
	long long cnt;
	cin>>n>>cnt;

	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
			cin>>arr[i][j];

	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
			tmp[i][j]=arr[i][j];

	power(cnt);
	print();
}
