#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char s[10000];
	char t[10000];
	char *tmp;
	cin>>t;
	strcpy(s,t);
	int arr[50];
	int cnt=0,op_cnt=0;
	char delims[]="+-\n";
	int sum=0;
	tmp=strtok(t,delims);
	arr[cnt++]=atoi(tmp);

	while(tmp!=NULL){
		tmp=strtok(NULL,delims);
		if(tmp!=NULL)
		arr[cnt++]=atoi(tmp);
	}
	sum=arr[0];

	for(int i=0;s[i]!=0;i++) {
		if(s[i]=='+') {
			op_cnt++;
			sum+=arr[op_cnt];
		}
		else if(s[i]=='-') {
		op_cnt++;
		int j=i+1;
		int temp=op_cnt;
		int tmp_sum=0;
		while(s[j]!=0){ 
			if(s[j]=='+') {
			       temp++;
			       j++;
			}
			else if(s[j]=='-')
				break;
			else
				j++;
		}
		for(int k=op_cnt;k<=temp;k++)
			tmp_sum+=arr[k];
		op_cnt=temp;
		sum-=tmp_sum;
		if(s[j]=='-')
		i=j-1;
		else
		i=j;	
		}
		else continue;
	}
cout<<sum;
}
