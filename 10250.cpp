#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int t,flag;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int h,w,n,cnt=0;
		cin>>h>>w>>n;
		for(int j=1;j<=w;j++)
		{
			flag=0;
			for(int k=1;k<=h;k++)
			{
				cnt++;
				if(n==cnt)
					{
					cout<<k;
					if(j<10)
						cout<<'0'<<j<<'\n';
					else{
						cout<<j<<'\n';
					flag=1;
					break;
					}
					}
			}
			if(flag)
			break;
		}
	}
}
