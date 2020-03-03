#include <iostream>
#include <cmath>

using namespace std;

int arr[500];

int main(void)
{
	int n,k;
	scanf("%d%d",&n,&k);
	double avg,v;
	long double ans=-1;

	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<=n-k;i++) {
	 long long sum=0;
	 int tmp=i;
	 long double tmp2=0;
	 for(int j=0;j<k;j++)
		 sum+=arr[tmp++];
	
	 avg=sum/(double)k;
	 tmp=i;
	 for(int j=0;j<k;j++) {
		 tmp2+=(arr[tmp]-avg)*(arr[tmp]-avg)/(double)k;
	 	 tmp++;
	 }
	 if(tmp2<ans||ans==-1)
		 ans=tmp2;
	}
	ans=sqrt(ans);
	printf("%Lf",ans);
}
