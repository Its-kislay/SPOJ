//Alphcode
//Dynamic Programming
#include<iostream>
#include<string>

//Approach
/*
1) Initialize an Array of Size N with 0 and element 0 as 1
2) Loop through all the elements
3) If it is a valid single digit number, Copy the previous element's value to the current element (DP[i] = DP[i-1])
4) If it is a valid two digit number, Add the previous to previous element's value to the current element (DP[i] += DP[i-2])
*/
using namespace std;
int decodings(int n);

int main()
{
	string message;
	while(1)
	{
		cin>>message;
		if(message[0]=='0')
			break;
		int len=message.length();
		int dp[len+1];			//An array which will store number of decodings for each corresponding length
		dp[0]=dp[1]=1;
		for(int i=2;i<=len;i++)
		{
			dp[i]=0;
			int c1=message[i-2]-'0';
			int c2=message[i-1]-'0';
			if(c2!=0)
				dp[i]+=dp[i-1];
			if(c1==1 || (c1==2 && c2<=6))
				dp[i]+=dp[i-2];
		}
		cout<<dp[len]<<endl;
	}
	return 0;
}

