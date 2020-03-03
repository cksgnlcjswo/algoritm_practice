#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int cnt=0;
	long long int prev1=0,prev2=1,cur=0;

	while(1)
	{
		if(cnt==n)
			break;
		cur=prev1+prev2;
		prev1=prev2;
		prev2=cur;
		cnt++;
	}
	if(cnt>=2)
	cout<<prev1;
	else	
	cout<<cur;
}
