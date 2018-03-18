//Edist
//DP
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int min(int x, int y, int z)
{
   return min(min(x, y), z);
}
int findop(string str1,string str2,int l1,int l2)
{
	int dp[l1+1][l2+1];
	for(int i=0;i<=l1;i++)
	{	
		for(int j=0;j<=l2;j++)
		{
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
			{	
				dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
			}
		}
	}
	return dp[l1][l2];
}
int main()
{
	int i=1;
	while(i--)
	{
		string str1,str2;
		cin>>str1;
		fflush(stdin);
		cin>>str2;
		int l1=str1.length();
		int l2=str2.length();
		int n=findop(str1,str2,l1,l2);
		cout<<n<<endl;
	}
	return 0;
}
