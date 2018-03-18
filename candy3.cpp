//ad-hoc1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	char c;
	cin>>t;
	while(t--)
	{
		fflush(stdin);
		ll n,m,res=0;
		ll num;
		cin>>n;
		m=n;
		while(m--)
		{
			cin>>num;
			res+=(num%n);
		}
		if((res%n)==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
