#include <iostream>
using namespace std;

int main(void)
{
	char str[1000000];
int	cnt=1,i;
	cin.getline(str,1000000);

	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==' ')
			cnt++;
	}

	if(str[0]==' ')
		cnt--;
	if(str[i-1]==' ')
		cnt--;

	cout<<cnt;

}
