#include <iostream>
#include <queue>

using namespace std;
int str,des;
int ans[100001];

int main(void)
{
	cin>>str>>des;
if(des>=str) {
	queue<int> q;
	q.push(str);
	ans[str]=0;
	while(!q.empty()) {
	int tmp=q.front();
	if(tmp==des) break;
	q.pop();
	if(tmp-1>=0&&!ans[tmp-1]) {
	ans[tmp-1]=ans[tmp]+1;
	q.push(tmp-1);
	}
	
	if(tmp+1<=100000&&!ans[tmp+1]) {
	ans[tmp+1]=ans[tmp]+1;
	q.push(tmp+1);
	}

	if(tmp*2<=100000&&!ans[tmp*2]) {
	ans[tmp*2]=ans[tmp]+1;
	q.push(tmp*2);
	}	
	}	
cout<<ans[des]; 
}
else
cout<<str-des;
}

