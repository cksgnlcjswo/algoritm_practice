#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		char str[8];
		cin>>str;

		if(!strcmp(str,"push")) {
		int tmp;
		cin>>tmp;
		q.push(tmp); 
		}
		else if(!strcmp(str,"pop")) {
		if(!q.empty()) {
		cout<<q.front()<<'\n';
		q.pop();
		}
		else
		cout<<"-1"<<'\n';
			}
		else if(!strcmp(str,"size")) {
		cout<<q.size()<<'\n';
		}	
		else if(!strcmp(str,"empty")) {
		if(q.empty())
		cout<<"1"<<'\n';
		else
		cout<<"0"<<'\n';
		}
		else if(!strcmp(str,"front")) {
		if(q.empty()) 
		cout<<"-1"<<'\n';
		else
		cout<<q.front()<<'\n';
		}
		else{
		if(q.empty())
		cout<<"-1"<<'\n';
		else
		cout<<q.back()<<"\n";
				}
	}
}
