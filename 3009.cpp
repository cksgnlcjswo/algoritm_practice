#include <iostream>

using namespace std;

typedef struct point {
	int x;
	int y;
} point;

int main(void)
{
	point point[3];
	int cnt_x[3]={0};
	int cnt_y[3]={0};
	int tmp1,tmp2;
	for(int i=0;i<3;i++)
		cin>>point[i].x>>point[i].y;

	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			if(point[i].x==point[j].x)
				cnt_x[i]++;
			if(point[i].y==point[j].y)
				cnt_y[i]++;
		}
	}
	
	for(int i=0;i<3;i++)
	{
		if(cnt_x[i]==1)
			tmp1=point[i].x;
		if(cnt_y[i]==1)
			tmp2=point[i].y;
	}

	cout<<tmp1<<' '<<tmp2;
}
