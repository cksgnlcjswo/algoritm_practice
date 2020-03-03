#include <iostream>

using namespace std;

int n;
int optr[4];
int arr[11];
int Max=-1000000001;
int Min=1000000001;

int calcul(int *arr,int i,int optr_idx,int result)
{
	if(i<n-1){
	if(!i)
	result=arr[i]; 

	switch(optr_idx)
	{
	case 0 : return result+arr[i+1];
	case 1 : return result-arr[i+1];
	case 2 : return result*arr[i+1];
	case 3 : return result/arr[i+1];
	default : return 0;
	}
}
}
void oper(int *arr,int cnt,int result,int idx)
{
	if(cnt==n-1)
	{
		if(result>Max&&result<=1000000000){
			Max=result;
		}
		if(result<Min&&result>=-1000000000){
			Min=result;
		}
		return;
	}
	for(int i=0;i<4;i++)
	{
		if(optr[i])
		{
			optr[i]--;
			int tmp=calcul(arr,idx,i,result);
			oper(arr,cnt+1,tmp,idx+1);
			optr[i]++;
		}
	}
}

int main(void)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<4;i++)
		cin>>optr[i];
	
	oper(arr,0,0,0);

	cout<<Max<<'\n';
	cout<<Min;
}
