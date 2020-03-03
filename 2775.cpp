#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n,cnt=0;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int floor,index;
		cin>>floor>>index;
		int *pre_floor=new int[index];
		int *cur_floor=new int[index];
		int flag;
		for(int i=0;i<index;i++)
			pre_floor[i]=i+1;
		
		for(int j=1;j<=floor;j++)
		{
			flag=0;
			for(int k=1;k<=index;k++)
			{
				for(int l=0;l<k;l++)
				cur_floor[k-1]+=pre_floor[l];
				
				if(floor==j&&index==k){
                                        flag=1;
                                        cout<<cur_floor[k-1]<<'\n';
                                        break;
                                }
			}
			for(int l=0;l<index;l++){
				pre_floor[l]=cur_floor[l];
				cur_floor[l]=0;
			}
			if(flag)
				break;
		}
		delete []cur_floor;
		delete []pre_floor;
	}
}
