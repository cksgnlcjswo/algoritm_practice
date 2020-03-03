#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int i;
	char a[100];
	int w[26];
	for(int j=0;j<26;j++)
		w[j]=-1;
	cin>>a;


	for(i=0;i<strlen(a);i++)
	{
		if(w[a[i]-'a']!=-1)
			continue;
		w[a[i]-'a']=i;
	}
	
	for(int i=0;i<26;i++)
		cout<<w[i]<<' ';
}
