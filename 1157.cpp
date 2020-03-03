#include <iostream>

using namespace std;

int main(void)
{
int cnt[26]={0};
int flag=0,max=0;
char str[1000000];
char t;
	cin>>str;
	
	for(int i=0;str[i]!=0;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			cnt[str[i]-'a']++;
		else
			cnt[str[i]-'A']++;
	
	}

	for(int i=1;i<26;i++)
	{
		if(cnt[max]==cnt[i])
			flag=1;
		if(cnt[max]<cnt[i]){
			max=i;	
			flag=0;
		}
	}
t=max+'A';	
	if(!flag)		//only one solution
	cout<<t;
	else
	cout<<"?";
}
