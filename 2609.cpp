#include <iostream>

using namespace std;

int main(void)
{
	int a,b,min,max,ans1,ans2;

	cin>>a>>b;
	if(a>b) {
	max=a;
	min=b;
	}
	else {
	max=b;
	min=a;
	}

	for(int i=max;;i+=max) {
		if(i%min==0){
			ans1=i;
			break;
		}
	}
	
	for(int i=min;i>1;i--) {
		if(min%i==0&&max%i==0) {
			ans2=i;
			break;
		}
	}
	cout<<ans2<<'\n'<<ans1;
}
