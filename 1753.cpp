#include <iostream>

using namespace std;
int v;
int length[20001][20001];
bool s[20001];
int dist[20001];

void init(void)
{
	for(int i=1;i<=v;i++)
	 for(int j=1;j<=v;j++) {
	  if(i==j)
		  length[i][j]=0;
	  else
		 length[i][j]=99999;
	 }
}

int choose(int t)
{
	int min=1;
	for(int i=1;i<=t;i++) {
			if(!s[i]) {
			       min=i;	
				if(dist[min]>=dist[i])  
				min=i;
			}
	}
	return min;
}

void shpath(const int r)
{
	for(int i=1;i<=v;i++) dist[i]=length[r][i];
	s[r]=true;
	dist[r]=0;

	for(int i=1;i<=v-2;i++) {
	int g=choose(v);
	s[g]=true;
	for(int w=1;w<=v;w++)
		if(!s[w])
		 if(dist[g]+length[g][w] < dist[w])
			dist[w]=dist[g]+length[g][w];
	}
}
int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int e,k;
	cin>>v>>e>>k;

	init();

	for(int i=0;i<e;i++) 
	{
		int u,t,w;
		cin>>u>>t>>w;

		length[u][t]=w;
	}

	shpath(k);

	for(int i=1;i<=v;i++) {
		if(dist[i]==99999)
			cout<<"INF"<<'\n';
		else
			cout<<dist[i]<<'\n';
	}
}
