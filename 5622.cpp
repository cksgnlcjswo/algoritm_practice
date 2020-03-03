#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	char dial[17];
	int time=0;
	int temp;
	cin>>dial;

	for(int i=0;dial[i]!=0;i++)
	{
		if(dial[i]>='A'&&dial[i]<='O')
		{
		temp=dial[i]-'A';
		time+=(temp/3)+2;
		}
	
		else if(dial[i]>='P'&&dial[i]<='S')
		time+=7;
		else if(dial[i]>='T'&&dial[i]<='V')
		time+=8;
		else
		time+=9;
	}
	time+=strlen(dial);
cout<<time;
}
