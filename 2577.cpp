#include <iostream>

using namespace std;

int main(void)
{
	int num;
	int big=1;
	int digit[10]={0};

	for(int i=0;i<3;i++){
		cin>>num;
		big*=num;
	}

	while(big!=0)
	{
		digit[big%10]++;
		big/=10;
	}	
	for(int i=0;i<10;i++)
		cout<<digit[i]<<'\n';
}
