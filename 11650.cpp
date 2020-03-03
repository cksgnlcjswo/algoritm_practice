#include <cstdio>
#define swap(x,y) {int t=x; x=y; y=t; }

void Quicksort(int *a,int *b,int left,int right)
{
	if(left<right)
	{
	int i=left,
	    j=right+1,
	    pivot=a[left];
	
	do {
	 do {i++;} while(a[i]<pivot);
	 do {j--;} while(a[j]>pivot);
	if(i<j){ swap(a[i],a[j]);
		swap(b[i],b[j]);
	}
	} while(i<j);
	swap(a[left],a[j]);
	swap(b[left],b[j]);	
	Quicksort(a,b,left,j-1);
	Quicksort(a,b,j+1,right);
	}
}

int main(void)
{
	int n;
	int cnt=0;
	scanf("%d",&n);

	int *x=new int[n];
	int *y=new int[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
	}
	x[n]=100001; y[n]=100001;
	Quicksort(x,y,0,n-1);
	
	for(int i=0;i<n;i+=(cnt+1))
	{
		int j=i;
		cnt=0;
		while(x[j]==x[j+1]){ cnt++; j++;}
		Quicksort(y,x,i,i+cnt);
	}
	
	for(int i=0;i<n;i++)
		printf("%d %d\n",x[i],y[i]);
}
