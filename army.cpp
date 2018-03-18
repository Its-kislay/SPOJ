//MechaGodzilla Vs Godzilla Army
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		cin>>c;
		int ng,nm;
		cin>>ng>>nm;
		int godzilla[ng],mechagodzilla[nm];
		for(int i=0;i<ng;i++)
			cin>>godzilla[i];
		for(int i=0;i<nm;i++)
			cin>>mechagodzilla[i];
		sort(godzilla,godzilla+ng);
		sort(mechagodzilla,mechagodzilla+nm);
		int i=0,j=0;
		while(i!=ng || j!=nm)
		{
			if(godzilla[i]<mechagodzilla[j])
				i++;
			else
			{
				j++;
			}
		}
		if(i==ng)
		{
			cout<<"MechaGodzilla\n";
		}
		else
		{
			cout<<"Godzilla\n";
		}
	}
	return 0;
}





