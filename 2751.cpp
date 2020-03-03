#include <iostream>
#define swap(x,y) {int t=x; x=y; y=t; }
using namespace std;

void Quicksort(int *arr,const int left,const int right)
{
	if(left<right)
	{
		int i=left;
		int j=right+1;
		int pivot=arr[left];	
	do {
	 do { i++; } while(pivot>arr[i]);
	 do { j--; } while(pivot<arr[j]);
	if(i<j) swap(arr[i],arr[j]);
	} while(i<j);
	swap(arr[left],arr[j]);
	
	Quicksort(arr,left,j-1);
	Quicksort(arr,j+1,right);
}
}
int main(void)
{
	int arr[1000000];
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
		cin>>arr[i];
	arr[t]=9999999;
	Quicksort(arr,0,t);

	for(int i=0;i<t;i++)
		cout<<arr[i]<<endl;
return 0;
}
