//Ambiguous Permutations
#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		int permut[100000];
		int inversepermut[100000];
		for(int i=0;i<n;i++)
			cin>>permut[i];
		int k=1;
		for(int i=0;i<n;i++)
		{
			inversepermut[permut[i]-1]=k;
			k++;
		}
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(inversepermut[i]!=permut[i])
				flag=false;
		}
		if(flag==true)
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
	}
	return 0;
}
