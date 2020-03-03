#include <iostream>

using namespace std;

int arr[50];

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	long long int n,max,answer,min;
	
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];
	max=arr[0];
	min=arr[0];
	for(int i=0;i<n;i++) {
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}

	if(n==1)
		answer=max*max;
	else 
		answer=min*max;
	
	cout<<answer;
}
