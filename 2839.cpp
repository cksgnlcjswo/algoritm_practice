#include <iostream>
using namespace std;
int main(void)
{
	int num;
	int answer=0;
	int n=0;
	int flag=0;
	cin>>num;
	
	if(num%5==0){		//if num is divided by 5
		answer=num/5;
		flag=1;
	}
	else 			//two cases
	{
	int cnt=1;
		while(cnt*3<num)
		{
		n=0;
		answer=cnt;
		for(int i=0;i<cnt&&n<num;i++)
		n+=3;

		while(n<num)
		{
			n+=5;
			answer++;
			if(num==n)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		break;
		cnt++;
		}
	}

	if(flag){
	cout<<answer;
	return 0;
	}
	if(num%3==0)
	cout<<num/3;
	else
	cout<<-1;
	}
