#include <cstdio>
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);
	double *percent=new double[n];
	for(int i=0;i<n;i++)
	{
		int sum=0;
		float avg;
		int num;
		int cnt;
		cin>>num;
		int *score=new int[num];
		for(int j=0;j<num;j++){
		cin>>score[j];
		sum+=score[j];
		}
		avg=sum/num;
		cnt=0;
		for(int j=0;j<num;j++){
			if(avg<score[j]) cnt++;
		}
		percent[i]=cnt*100/(double)num;
		delete []score;
	}
	for(int k=0;k<n;k++)
		printf("%3.3lf%\n",percent[k]);
}
