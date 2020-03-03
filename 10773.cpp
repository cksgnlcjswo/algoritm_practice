#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<int> s;
	int n,sum=0;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if(!num)
		s.pop();
		else
		s.push(num);
	}

	while(!s.empty())
	{
		sum+=s.top();
		s.pop();
	}
	cout<<sum;
}
