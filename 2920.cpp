#include <iostream>

using namespace std;
int check_num(int *num)
{
	bool i1=true;
	bool i2=true;
	bool i3=false;
	for(int i=0;i<8;i++)
	{
		for(int k=i+1;k<8;k++){
		if(num[i]>num[k])
			i1=false;
		}
	}
		if(i1)
		return 0;
	for(int i=0;i<8;i++)
	{
		for(int k=i+1;k<8;k++){
		if(num[i]<num[k])
			i2=false;
		}
	}	
		if(i2)
		return 1;
	return 2;
}
int main(void)
{
	int num[8];
	int order;
	for(int i=0;i<8;i++)
		cin>>num[i];

	order=check_num(num);
	switch(order)
	{
	case 0:cout<<"ascending"; break;
	case 1:cout<<"descending"; break;
	case 2:cout<<"mixed"; break;
	}
}
