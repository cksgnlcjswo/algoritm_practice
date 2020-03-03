#include <iostream>

using namespace std;

int arr[2187][2187];
int zcnt,ocnt,mcnt;

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
		 ocnt++;
	 else if(tmp==-1)
		 mcnt++;
	 else
		 zcnt++;
	 return;
	}
	size/=3;
	divcon(beginx,beginy,size);	//1/9
	divcon(beginx+size,beginy,size);	//2/9
	divcon(beginx+2*size,beginy,size);	//3/9
	divcon(beginx,beginy+size,size);	//4/9
	divcon(beginx+size,beginy+size,size);	//5/9
	divcon(beginx+2*size,beginy+size,size); //6/9
	divcon(beginx,beginy+2*size,size);	//7/9
	divcon(beginx+size,beginy+2*size,size);	//8/9
	divcon(beginx+2*size,beginy+2*size,size);	//9/9
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

	cout<<mcnt<<'\n'<<zcnt<<'\n'<<ocnt;
}
