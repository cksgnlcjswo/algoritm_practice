#include <iostream>

using namespace std;

long long int count[40];

int fibonacci(int n) 
{
	if(count[n]>0) return count[n];
       if (n==0) {
	return 0;
    } else if (n==1||n==2) { 
	    return 1;
    } else {
	    return count[n]=fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int tmp;
		cin>>tmp;
		if(tmp==0)
			cout<<'1'<<' '<<'0'<<'\n';
		else if(tmp==1)
			cout<<'0'<<' '<<'1'<<'\n';
		else{
		cout<<fibonacci(tmp-1)<<' '<<fibonacci(tmp)<<'\n';
		}
	}
}
