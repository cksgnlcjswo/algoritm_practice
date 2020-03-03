import java.io.IOException;
class star {

	public static void main(String args[]) throws IOException {
	
		int n=System.in.read();
		char arr[][]=new char[n][n];

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			arr[i][j]=' ';
		f(arr,0,0,n);
	
	try {
		
	}
	catch(IOException e) {
		System.err.print(e);
	}
	}

        public static void f(char[][] arr ,int y,int x,int num) {
        
        if(num==1)
        {
        arr[y][x]='*';
        return;
        }

        int div=num/3;
        for(int i=0;i<3;i++)
         for(int j=0;j<3;j++)
         {
        if(i==1&&j==1);
        else f(arr,y+(i*div),x+(j*div),div);
         }
        }
}
