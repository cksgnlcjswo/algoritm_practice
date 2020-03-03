#include <iostream>
using namespace std;
int main()
{
	int iter;
	cin>>iter;
	int flag=0;
	int cnt=0;
	int i,j,k;
	
	for(i=0;i<iter;i++)
	{
		flag=0;
		char word[100];
		cin>>word;
		for(j=0;word[j]!=0;j++)
		{
			while(word[j+1]==word[j]) j++;
			
			for(k=j+1;word[k]!=0;k++)
			{
				if(word[k]==word[j])
				{
					flag=1;
					break;
				}
			}
			if(flag)
			break;
		}	
		if(!flag)
			cnt++;
	}
cout<< cnt;
}
