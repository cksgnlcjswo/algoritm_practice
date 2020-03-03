#include <iostream>
using namespace std;
int main(void)
{
unsigned int a,b,c,num;

	cin>>a>>b>>c;

	if(b>=c){
	cout<<-1;
	return 0;
	}
	num=a/(c-b);
	num++;
	cout<<num;
}
