#include <iostream>
#include <algorithm>
#include <vector>
#define swap(x,y) {int t=x; x=y; y=t;}
using namespace std;
void Quicksort(int *arr,int left,int right)
{
	if(left<right) {
		int pivot=arr[left];
		int i=left;
		int j=right+1;
	
	do {
	 do{i++; } while(pivot>arr[i]);
	 do{j--; } while(pivot<arr[j]);
	if(i<j) swap(arr[i],arr[j]);
	} while(i<j);
	 swap(arr[left],arr[j]);
	 Quicksort(arr,left,j-1);
	 Quicksort(arr,j+1,right);
	}
}

int main(void) {
	int arr[1000];
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	arr[n]=999999;
	Quicksort(arr,0,n-1);
	for(int i=0;i<n;i++) {
		int tmp=0;
		for(int j=0;j<=i;j++)
			tmp+=arr[j];
		sum+=tmp;
	}
cout<<sum;
}
