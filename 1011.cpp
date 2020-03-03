#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int cnt=1,j;
		int x,y;
		cin>>x>>y;
		int distance=y-x;
		long long int tmp;
		for(j=1;;j++)
		{
			if(distance==1)
				break;
			if(distance==j*j){
				cnt=(j-1)*2+1;
			}	
			if(distance<j*j)
				break;
		}
		if(j>=2){
			if(cnt==1)
		cnt=(j-1)*2;
		tmp=j*j+(j-1)*(j-1);
		if(tmp/2<distance)
			cnt++;
		}
		cout<<cnt<<'\n';
	}
	}
	
