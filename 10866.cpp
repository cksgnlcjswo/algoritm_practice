#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	deque<int> d;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		char str[15];
		cin>>str;

		if(!strcmp(str,"push_back")) {
			int tmp;
			cin>>tmp;
			d.push_back(tmp);
				}
		else if(!strcmp(str,"push_front")) {
			int tmp;
			cin>>tmp;
			d.push_front(tmp);
			}
		else if(!strcmp(str,"pop_front")) {
			if(!d.empty()){
			cout<<d.front()<<'\n';
			d.pop_front();
			}	
			else
			cout<<"-1"<<'\n';
			}	
		else if(!strcmp(str,"pop_back")) {
			if(!d.empty()){
			cout<<d.back()<<'\n';
			d.pop_back();
			}
			else
			cout<<"-1"<<'\n';
		}	
		else if(!strcmp(str,"size")) {
			cout<<d.size()<<'\n';
				}
		else if(!strcmp(str,"empty")) {
			cout<<d.empty()<<'\n';
		}
		else if(!strcmp(str,"front")) {
			if(!d.empty())
			cout<<d.front()<<'\n';
			else
				cout<<"-1"<<'\n';
		}
		else {
			if(!d.empty())
			cout<<d.back()<<'\n';
			else
				cout<<"-1"<<'\n';
		}
	}
}

