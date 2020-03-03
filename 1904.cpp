#include <iostream>

using namespace std;

long long int arr[1000001]={0,1,2,};
int main(void)
{
	int num;
	cin>>num;

	if(num>2){
	for(int i=3;i<=num;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		arr[i]%=15746;
	}}
	cout<<arr[num];
}
