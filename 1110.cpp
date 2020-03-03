#include <iostream>
using namespace std;

int main(void)
{
	int n,answer=-1,cnt=0;
	cin>>n;
	int tmp=n;
	while(tmp!=answer)
	{	
		answer=(n/10)+(n%10);
		answer=((n%10)*10)+(answer%10);
		n=answer;
		cnt++;
	}
	cout<<cnt;

}
