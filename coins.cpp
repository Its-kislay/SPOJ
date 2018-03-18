//Bytelandian Coins
#include<stdio.h>
#include<iostream>
#include<map>
#define ll long long
using namespace std;
ll change(ll n);
map<ll,ll> M;
map<ll,ll> :: iterator itr;
int main()
{
	ll k;
	while(scanf("%lld",&k)!=EOF)
	{
		ll max=change(k);
		cout<<max<<endl;
	}
	return 0;
}

long long change(long long n)
{
	
	itr=M.find(n);
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==0)
		return 0;
	if(itr != M.end())
		return itr->second;
	ll max=n;
	ll first=n/2;
	ll second=n/3;
	ll third=n/4;
	ll m1=change(first);
	ll m2=change(second);
	ll m3=change(third);
	ll m=m1+m2+m3;
	if(max<=m)
	{
		M.insert(pair<ll,ll>(n,m));
		return m;
	}
	else
	{
		M.insert(pair<ll,ll>(n,max));
		return max;
	}
}
