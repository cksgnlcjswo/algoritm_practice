#include <iostream>

using namespace std;

int small(int x,int y,int w,int h)
{
	int width;
	int heigh;
	(x>(w-x)) ? width=w-x:width=x;
	(y>(h-y)) ? heigh=h-y:heigh=y;
	return width>heigh?heigh:width;
}
int main(void)
{
	int x,y,w,h,min;
	cin>>x>>y>>w>>h;

	min=small(x,y,w,h);

	cout<<min;
}
