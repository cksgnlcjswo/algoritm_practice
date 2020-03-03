#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(void) 
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	stack<int> s;

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		char str[10];
		cin>>str;
		
		if(!strcmp(str,"push")) {
			int tmp;
			cin>>tmp;
			s.push(tmp);
				}		
		else if(!strcmp(str,"top")){
		       if(!s.empty())	
			cout<<s.top()<<'\n';
		       else
			cout<<"-1"<<'\n';
		}
		else if(!strcmp(str,"empty")) {
				if(s.size()>0)
				cout<<"0"<<'\n';
				else
				cout<<"1"<<'\n';
			}
		else if(!strcmp(str,"pop")) {
			if(!s.empty()) {
				cout<<s.top()<<'\n';
				s.pop();
			}
			else
				cout<<"-1"<<'\n';
		}
		else 
		cout<<s.size()<<'\n';			
	}
}
