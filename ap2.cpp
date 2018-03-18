//Arithmetic Progression
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,d,an;					//number of terms,first term,common diff
		int a3,l3,sn;		//a3 - third term of ap, l3- 3rd last term and sn is sum to n terms
		cin>>a3>>l3>>sn;
		n=(2*sn)/(a3+l3);
		d=(l3-a3)/(n-5);
		a=a3-2*d;
		cout<<n<<endl;
		an=a;
		for(int i=1;i<=n;i++)
		{
			cout<<an<<" ";	
			an=a+i*d;
		}
		cout<<endl;
	}
	return 0;
}
