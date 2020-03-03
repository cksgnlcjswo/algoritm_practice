#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int x1,x2,y1,y2,r1,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	if(x1==x2&&y1==y2&&r1==r2)
	{
		cout<<"-1"<<'\n';
		continue;
	}
	double distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	int r=r1+r2;

	if(distance==r)
		cout<<"1"<<'\n';
	else if(distance>r)		
		cout<<"0"<<'\n';
	else{
		int big_r=r1,small_r=r2;
		r1>r2?big_r=r1,small_r=r2:big_r=r2,small_r=r1;
			if(distance+small_r==big_r)
				cout<<"1"<<'\n';
			else if(distance+small_r<big_r)
				cout<<"0"<<'\n';
			else
				cout<<"2"<<'\n';
	}
	
	}

}
