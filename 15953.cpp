#include <iostream>
#include <vector>

using namespace std;

int money1[6]={500,300,200,50,30,10};
int money2[6]={512,256,128,64,32};

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	int sum=0,tmp;
	vector<pair<int,int>> v1;
	vector<pair<int,int>> v2;

	for(int i=1;i<=6;i++) {
		sum+=i;
	v1.push_back(make_pair(money1[i-1],sum));
	}	

	sum=0;
	tmp=1;
	for(int i=1;i<=5;i++) { 
		sum+=tmp;
	v2.push_back(make_pair(money2[i-1],sum));
	tmp*=2;
	}

	for(int i=0;i<t;i++) {
		int tmp1,tmp2,ans=0;
		cin>>tmp1>>tmp2;
		if(tmp1) { 
		for(int j=0;j<6;j++) {
			if(v1[j].second>=tmp1){
				ans+=v1[j].first;
				break;
			}
		}
		}
		if(tmp2) {
		 for(int j=0;j<5;j++) {
                        if(v2[j].second>=tmp2){
                                ans+=v2[j].first;
                                break;
                        }
                }
		}
		cout<<ans*10000<<'\n';
	}
}
