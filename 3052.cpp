#include <iostream>

using namespace std;

int main(void)
{
	int num[10];
	int digit[42]={0};
	int cnt=0;
	for(int i=0;i<10;i++)
		cin>>num[i];
	for(int i=0;i<10;i++)
		digit[num[i]%42]++;
	for(int i=0;i<42;i++)
		if(digit[i]) cnt++;

	cout<<cnt;

}
