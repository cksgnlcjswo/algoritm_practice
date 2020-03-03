#include <iostream>

using namespace std;

int arr[128][128];
int bcnt,wcnt;

void divcon(int beginx,int beginy,int size)
{
	bool flag=true;
	int tmp=arr[beginx][beginy];
	for(int i=beginx;i<beginx+size;i++) {
	 for(int j=beginy;j<beginy+size;j++) {
		if(arr[i][j]!=tmp) {
		      flag=false;
		      break;
		}	      
	 }
		if(!flag)
			break;
	}
	if(flag) {
	 if(tmp==1)
		 bcnt++;
	 else
		 wcnt++;
	 return;
	}
	size/=2;
	divcon(beginx,beginy,size);
	divcon(beginx+size,beginy,size);
	divcon(beginx,beginy+size,size);
	divcon(beginx+size,beginy+size,size);
}
int main(void)
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++) {
	 for(int j=0;j<n;j++) {
	  cin>>arr[i][j];
	 }
	}
	
	divcon(0,0,n);

	cout<<wcnt<<'\n'<<bcnt;
}
