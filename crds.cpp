//crds
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
	long long int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=(i-1)+2*i;
	}
	return (sum%1000007);
}
int main()
{
	int t,n,res;
	cin>>t;
	while(t--)
	{
		cin>>n;
		res=count(n);
		cout<<res<<endl;
	}
	return 0;
}
