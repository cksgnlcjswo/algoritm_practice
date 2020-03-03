#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
int h,m;

cin>>h>>m;

	if(m-45<0){
	 if(!h)
		h=23;
	 else
	h-=1;
	m=60-abs(m-45);}
	else if(m-45>0){
	m=m-45;}
	else{
	m=0;}
	cout<<h<<' '<<m;
}
