//maxln
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	unsigned long long int radius;
	double res;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>radius;
		res= double(4*radius*radius)+0.25;
		cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<res<<endl;
	}
	return 0;
}
