//Math
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	int l;
	while(1)
	{	
		cin>>l;
		if(l==0)
			break;
		l=l*l;
		float res= (float(l)/3.14159)/2;
		cout<<fixed<<setprecision(2)<<res<<endl;
	}
	return 0;
}

