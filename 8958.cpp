#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	int cnt,sum=0;
	cin>>n;
	string *str=new string[n];
	for(int i=0;i<n;i++){
		cin>>str[i];
		int j=0;
		sum=0;
		while(str[i][j]!=0){
		if(str[i][j]=='O'){
			cnt=0;
		while(str[i][j]=='O'){
			cnt++;
			j++;
		sum+=cnt;
		}	
		}
		j++;
		}
	cout<<sum<<'\n';
}}
