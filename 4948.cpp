#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	while(1){
	int cnt=0;
	int num;
	cin>>num;
	if(!num) break;	
	bool *prime=new bool[num*2+1];
	for(int i=2;i<=num*2;i++)
		prime[i]=true;
	for(int i=2;i<=num*2;i++)
	{
		if(prime[i])
		{
		for(int j=i+i;j<=num*2;j+=i)
		prime[j]=false;
		}
	}
	for(int i=num+1;i<=num*2;i++){
		if(prime[i])
			cnt++;
				}
	cout<<cnt<<'\n';
	delete []prime;
} 
}
