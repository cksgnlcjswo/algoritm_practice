#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
int n,median,range,mode,tmp_cnt,cnt,mode_cnt=1,tmp;
double sum=0;
double avg;
cin>>n;
vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	
	mode=v[n-1];
	avg=sum/n;
	median=v[n/2];
	range=v[n-1]-v[0];

	for(int i=n-1;i>-1;i--)
	{
		cnt=1;
		while(v[i]==v[i-1]&&i>0){
		       	cnt++;
			i--;
		}
		if(cnt>=mode_cnt){
			tmp=mode;
			mode=v[i];
			tmp_cnt=mode_cnt;
			mode_cnt=cnt;
		}
	}
	if(tmp_cnt==mode_cnt)
		mode=tmp;
	cout<<llround(avg)<<'\n'<<median<<'\n'<<mode<<'\n'<<range;
}
