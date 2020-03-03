#include <iostream>

using namespace std;

int generator(int i)
{
	int sum=i;
	while(i!=0)
	{
		sum+=i%10;
		i/=10;
	}
	if(sum>10000) return -1;
	return sum;
}
int main(void)
{
	int num[10001]={0};

	for(int i=1;i<=10000;i++)
	{
		int tmp=generator(i);
		if(tmp==-1) continue;
		num[tmp-1]++;
	}

	for(int i=0;i<10000;i++)
	{
		if(!num[i])
			printf("%d\n",i+1);
	}
}
