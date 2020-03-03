#include <iostream>

using namespace std;
string cro[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};

int check_cro(string str,int idx)
{
	int flag;
	for(int i=0;i<8;i++)
	{
		int k=cro[i].length();
		if(cro[i][0]==str[idx])
		{
			flag=0;
			for(int j=0;j<k;j++)
			{
				if(cro[i][j]!=str[idx+j]){
					flag=1;
					break;		
				}		
			}
			if(flag==1&&i==7)
			return 0;
			if(!flag)
			return k;
		}
	}
	return 0;
}
int main(void)
{
	string str;
	cin>>str;
	int idx=0;
	int cnt=0;
	while(str[idx]!=0)
	{
		int tmp=check_cro(str,idx);
		if(!tmp){ idx++; cnt++;  continue;}
		idx+=tmp;
		cnt++;
	}
		cout<<cnt;
		return 0;
}
