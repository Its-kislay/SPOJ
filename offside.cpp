//Offside
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(1)
	{
		cin>>n>>m;
		if(n==0 && m==0)
			break;
		int B[12],C[12];
		for(int i=0;i<n;i++)
			cin>>B[i];
		for(int i=0;i<m;i++)
			cin>>C[i];
		sort(A,A+n);
		sort(B,B+m);
		if(A[0]<B[1])
			cout<<"Y\n";
		else
			cout<<"N\n";
	}
	return 0;
}
