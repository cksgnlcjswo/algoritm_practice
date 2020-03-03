#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct t {
	long int s;
	long int e;
};

bool cmp(const t &t1, const t &t2)
{
	if(t1.e<t2.e)
		return true;
	else if(t1.e==t2.e)
		return t1.s<t2.s;
	else 
		return 0;
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n,cnt=1;
	long int tmp;
	cin>>n;
	vector<t> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i].s>>v[i].e;

	sort(v.begin(),v.end(),cmp);

	tmp=v[0].e;

	for(int i=1;i<n;i++) {
		if(tmp<=v[i].s) {
			cnt++;
			tmp=v[i].e;
	}
}
	cout<<cnt;
}
