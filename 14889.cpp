#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int sum1,sum2;
int arr[20][20];
int answer=999999999;
bool visited[20];
int n;
vector<int> v;

void combi1(int cnt,int idx)			//sum1
{
	if(cnt==2)
	{
		sum1+=(arr[v[0]][v[1]]+arr[v[1]][v[0]]);
		return;
	}
	
	for(int i=idx;i<n;i++)
	{
		if(visited[i])
		{
			visited[i]=false;
			v.push_back(i);
			combi1(cnt+1,i+1);
			visited[i]=true;
			v.pop_back();
		}
	}
}
void combi2(int cnt,int idx)
{
        if(cnt==2)
        {
                sum2+=(arr[v[0]][v[1]]+arr[v[1]][v[0]]);
                return;
        }

        for(int i=idx;i<n;i++)
        {
                if(!visited[i])
                {
                        visited[i]=true;
                        v.push_back(i);
                        combi2(cnt+1,i+1);
                        visited[i]=false;
                        v.pop_back();
                }
        }
}

void start(int cnt,int idx)
{
	if(cnt==n/2)
	{
		combi1(0,0);
		combi2(0,0);
		if(abs(sum1-sum2)<answer)
			answer=abs(sum1-sum2);
		sum1=0; sum2=0;
		return;
	}

	for(int i=idx;i<n;i++)		//make a team
	{
		if(!visited[i])
		{
			visited[i]=true;
			start(cnt+1,i+1);
			visited[i]=false;
		}
	}
}
int main(void)
{
	int j=0;
	cin>>n;

	while(j!=n){
	for(int i=0;i<n;i++)
	{
	cin>>arr[j][i];		
	}
	j++;
	}
	start(0,0);
	cout<<answer;
}
