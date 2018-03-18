//Stamps
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cout<<"Scenario #"<<j<<":\n";
		int stamps,borrowers;
		cin>>stamps>>borrowers;
		int friends[1000];
		for(int i=0;i<borrowers;i++)
			cin>>friends[i];
		sort(friends,friends+borrowers);
		int i=borrowers-1;
		int sum=0;
		while(i>=0)
		{
			sum+=friends[i];
			if(sum>=stamps)
				break;
			i--;
		}
		if(i==-1 && sum<stamps)
			cout<<"impossible\n\n";
		else
		{
			i=borrowers-i;
			cout<<i<<"\n\n";
		}
	}
	return 0;
}





