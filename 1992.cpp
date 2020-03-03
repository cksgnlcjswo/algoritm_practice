#include <iostream>

using namespace std;

int n;
int arr[64][64];

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
	cout<<tmp;
	 return;
	}
	size/=2;
	cout<<"(";
	divcon(beginx,beginy,size);
	divcon(beginx,beginy+size,size);
	divcon(beginx+size,beginy,size);
	divcon(beginx+size,beginy+size,size);
	cout<<")";
}
int main(void)
{
	cin>>n;
	for(int i=0;i<n;i++) {
		string str;
		cin>>str;
	 for(int j=0;j<n;j++) {
	  	arr[i][j]=str[j]-'0';
	 }
	}
	
	divcon(0,0,n);
}
