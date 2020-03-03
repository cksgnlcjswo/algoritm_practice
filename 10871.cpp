#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int x;

	cin>>n>>x;
	int *v=new int[n];

	for(int i=0;i<n;i++)
		cin>>v[i];

	for(int i=0;i<n;i++)
	{
		if(v[i]<x)
			cout<<v[i]<<' ';
	}
}
