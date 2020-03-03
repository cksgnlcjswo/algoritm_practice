#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int temp;
	int MAX = 0;
	int arr[1001];
	int dp[1001];

	cin >> N;
	if(N==1)
		cout<<"1";
	else {
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		dp[i] = 1;
	}

	for (int i = 2; i <= N; i++)
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = dp[j] + 1;
				dp[i] = max(temp, dp[i]);
			}
			MAX = max(MAX, dp[i]);
		}
	
	cout << MAX << endl;
	}
	return 0;
}
