#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, m;
int nary[600000];
int mcard;

int search_card(int s, int e, int card) {
	if (s == e) {
		if (nary[s] == card)
			return 1;
		else
			return 0;
	}
	else if (s > e)
		return 0;

	int mid = (s + e) / 2;

	if (card < nary[mid]) {
		return search_card(s, mid- 1, card);
	}
	else if (card == nary[mid])
		return 1 + search_card(s, mid - 1, card) + search_card(mid + 1, e, card);
	else
		return search_card(mid + 1, e, card);
}

int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		scanf("%d",& nary[i]);
	sort(nary, nary + n);
	scanf("%d",&m);
	for (int i = 0; i < m; i++) {
		scanf("%d",&mcard);
		printf("%d ",search_card(0, n-1, mcard));
	}

	return 0;
}
