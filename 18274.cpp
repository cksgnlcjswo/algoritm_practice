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
		int cnt;
		int m,n;
		cin>>m>>n;

		if(m<12||n<4) {
		cout<<"-1"<<'\n';
		continue;
		}
		else {
		cnt=n*11+4;
		cout<<cnt<<'\n';
		}

	}
}
