#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	float *num=new float[n];
	for(int i=0;i<n;i++)
		cin>>num[i];
	float max=num[0];
	float sum=0;
	for(int i=0;i<n;i++)
	{
		if(max<num[i])
			max=num[i];
	}
	
	for(int i=0;i<n;i++)
	{
		num[i]=(num[i]/max)*100;
	}

	for(int i=0;i<n;i++)
		sum+=num[i];
	cout<<sum/n;

}
