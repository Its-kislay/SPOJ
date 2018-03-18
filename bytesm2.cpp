//Bytesm2
//DP
#include<iostream>
using namespace std;

int max(int x, int y, int z)
{
   return max(max(x, y), z);
}
int countMax(int ar[102][102],int rows,int cols)
{
	for(int i=rows;i>=1;i--)
	{
		for(int j=cols;j>=1;j--)
		{
			int maxstones=max(ar[i+1][j],ar[i+1][j-1],ar[i+1][j+1]);
			ar[i][j]+=maxstones;
		}
	}
	int res=-1;
	for(int k=1;k<=cols;k++)
	{
		if(ar[1][k]>res)
			res=ar[1][k];
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int rows,cols;
		int ar[102][102];
		cin>>rows>>cols;
		for(int i=0;i<=rows+1;i++)
			for(int j=0;j<=cols+1;j++)
				ar[i][j]=0;
				
		for(int i=1;i<=rows;i++)
			for(int j=1;j<=cols;j++)
				cin>>ar[i][j];
		int res=countMax(ar,rows,cols);
		cout<<res<<endl;
	}
}
