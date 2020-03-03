#include <iostream>

using namespace std;
int pos[1000][1000];
int check(int prox,int proy,int sungx,int sungy)
{
	int distance=((prox-sungx)*(prox-sungx))+((proy-sungy)*(proy-sungy));
	cout<<distance;
	if(distance>=25)
	{
		int cnt=0;
		int maxx,minx,miny,maxy;
		prox>sungx?maxx=prox,minx=sungx:maxx=sungx,minx=prox;
		proy>sungy?maxy=proy,miny=sungy:maxy=sungy,miny=proy;

		if(prox==sungx)
		{
			int cn=0;

			for(int i=miny;i<=maxy;i++)
			{
				if(pos[i][prox]==1)
					cn++;
			}
			if(cn>2)
				return 1;
		}

		if(proy==sungy)
		{
			int cn=0;

			for(int i=minx;i<=maxx;i++)
			{
				if(pos[proy][i]==1)
					cn++;
			}
			if(cn>2)
				return 1;
		}
		for(int i=miny;i<=maxy;i++)
		{
			for(int j=minx;j<=maxx;j++)
			{
				if(pos[i][j]==1)
					cnt++;
			}
		}
		if(cnt>2)
			return 1;
	}
	else
		return 0;
}

int main(void)
{
	int n,prof_x,prof_y,sung_x,sung_y;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>pos[i][j];
	}
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		if(pos[i][j]==5){
			prof_x=j;
			prof_y=i;
		}	
		if(pos[i][j]==2){
			sung_x=j;
			sung_y=i;
		}
	}
	}
	
	if(check(prof_x,prof_y,sung_x,sung_y))
		cout<<"1";
	else
		cout<<"0";

}
