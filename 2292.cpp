#include <iostream>
using namespace std;
int main(void)
{
	int n;
	int cnt=0;
	int sum=1;
	cin>>n;

	for(;;)
	{
		if(sum>=n)
			break;
	sum+=cnt*6;
	cnt++;	
	}
if(sum==1)
cout<<1;
else
	cout<<cnt;


}
