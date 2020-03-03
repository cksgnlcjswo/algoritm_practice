#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;	
	while(a!=0&&b!=0){
		if(a>=b)  {
		 if(a%b==0)
			 cout<<"multiple"<<'\n';
		 else
			 cout<<"neither"<<'\n';
		}
		else {
		 if(b%a==0) 
			 cout<<"factor"<<'\n';
		 else
			 cout<<"neither"<<'\n';
		}
	cin>>a>>b;
	}
}
