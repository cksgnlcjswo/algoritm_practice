#include <iostream>
using namespace std;

int count(int S[], int n, int N)
{
	if (N == 0)
		return 1;

	if (N < 0 || n < 0)
		return 0;

	int include = count(S, n, N - S[n]);
	int exclude = count(S, n - 1, N);

	// return total ways by including or excluding current coin
	return include + exclude;
}

// Coin Change Problem
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	// n coins of given denominations
	int S[100];
	int n,sum;

	cin>>n>>sum;

	for(int i=0;i<n;i++)
		cin>>S[i];


	cout<<count(S,n-1,sum);

	return 0;
}
