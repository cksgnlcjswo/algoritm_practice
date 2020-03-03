#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int temp;
	int conv_a,conv_b;

	cin>>a>>b;

	conv_a=(a/100)+((a/10)%10)*10+((a%100)%10)*100;
	conv_b=(b/100)+((b/10)%10)*10+((b%100)%10)*100;

	conv_b > conv_a ? cout<<conv_b:cout<<conv_a;

}
