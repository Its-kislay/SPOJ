//ololo
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	ll res=0;
	ll *ar=new ll[n];
	for(int i=0;i<n;i++)
		scanf("%llu",&ar[i]);
  for(int i=0;i<n;i++)
	{
		res=res^ar[i];
	}
	cout<<res;
	return 0;
}
