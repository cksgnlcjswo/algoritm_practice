#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);	
	
	while(1) {
	int idx=0;
	char str[101];
	stack<char> paren;
	cin.getline(str,sizeof(str));
	int flag=0;
	if(!strcmp(str,"."))
		break;

	while(str[idx]!=0) {
		if(str[idx]=='['||str[idx]=='(')
			paren.push(str[idx++]);
		else if(str[idx]==']'||str[idx]==')') {
			if(!paren.empty()) {
			 if(str[idx]==']'&&paren.top()=='(') {
	      		  cout<<"no"<<'\n';
			  flag=1;
	       	 	  break;
		          }
			   if(str[idx]==')'&&paren.top()=='['){
			    cout<<"no"<<'\n';
			    flag=1;
			    break;
			    }
			paren.pop();
			idx++;
			}
			else{
			cout<<"no"<<'\n';
			flag=1;
			break;
			}

		}
		else idx++;
	}
	if(!flag) {
		if(paren.empty())
			cout<<"yes"<<'\n';
		else
			cout<<"no"<<'\n';
	}
}
}
