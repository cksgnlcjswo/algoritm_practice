#include <iostream>
#include <cstdio>
using namespace std;
int cnt;
bool board[14][14];

bool check_chess(int col,int i,int n)
{
        for(int column=0;column<col;column++){  //height check
                if(board[column][i])
                  return false;
        }

        for(int k=i+1,j=col-1;k<n&&j>-1;j--,k++)        //right up
        {
          if(board[j][k])
                  return false;
        }

        for(int k=i+1,j=col+1;k<n&&j<n;j++,k++)     //right down
        {
          if(board[j][k])
                  return false;
        }

        for(int k=i-1,j=col-1;k>-1&&j>-1;j--,k--)     //left up
        {
          if(board[j][k])
                  return false;
        }

        for(int k=i-1,j=col+1;k>-1&&j<n;j++,k--)     //left down
        {
          if(board[j][k])
                  return false;
        }
return true;
}

void N_Queen(int queen_num,int col,int n)
{
	if(queen_num==n)
	{
		cnt++;
		return;	
	}

	for(int i=0;i<n;i++)
	{
		board[col][i]=true;
		if(check_chess(col,i,n))
			N_Queen(queen_num+1,col+1,n);
		board[col][i]=false;
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);

	N_Queen(0,0,n);
	printf("%d",cnt);	
}
