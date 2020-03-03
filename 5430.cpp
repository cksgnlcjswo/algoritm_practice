#include <iostream>
#include <algorithm>
#include <cstring>
#include <deque>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int t;
	cin>>t;

	for(int i=0;i<t;i++) {
		int num;
		int n=0;
		bool eflag=0;
		int rcnt=0;
		char com[100001];
		char vec_str[400004];
		char *temp;
		deque<int> v;

		cin>>com;
		cin>>num;
		cin>>vec_str;
		if(num>0) {
			for (int i = 1;vec_str[i]!=0; i++) {
				if (vec_str[i] >= '0'&&vec_str[i] <= '9') {
					n *= 10;
					n += vec_str[i] - '0';
				}
				else {
					v.push_back(n);
					n = 0;
				}
			}
		}
		
		for(int j=0;com[j]!=0;j++) {
			if(com[j]=='R')
			rcnt++;
			else {
				if(!v.empty()){
					if(rcnt%2==1)		//reverse
					v.pop_back();
					else			//not rever
					v.pop_front();
				}
				else {
				cout<<"error"<<'\n';
				eflag=1;
				break;
				}
			}
		}
		if(num==0&&!eflag){
			cout<<"[]"<<'\n';
			continue;
		}
		else{
		if(!v.empty()) {
			cout<<"[";
			
			if(rcnt%2==0) {
			 while(v.size()!=1) {
				if(v.size()==1)
					break;
				cout<<v.front();
				cout<<",";
				v.pop_front();		
			}
			cout<<v.front();
			}

			else {
			  while(v.size()!=1) {
                                cout<<v.back();
                                cout<<",";
                                v.pop_back();
                        }
                        cout<<v.back();
			}
		cout<<"]"<<'\n';
		}
		}
	}
}

