#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;

	for(int i=0;i<n;i++) {
		char str[100];
		stack<char> s;
		cin>>str;
		int idx=0;
		while(str[idx]!=0) {
			if(str[idx]==')') {
				if(s.empty()){
					cout<<"NO"<<'\n';
					break;
				}
				else
					s.pop();
				idx++;
			}
			else 
			s.push(str[idx++]);
			
		}
			if(str[idx]==0){
		if(s.empty())
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
			}
	}
}
