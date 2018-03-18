//Street Parade
//Stacks
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	while(1)
	{
		int ar[1000];
		int n;
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		stack<int>lane;
		int truck=1;
		bool state=true;
		for(int i=0;i<n;i++)
		{
			while(!lane.empty() && lane.top()==truck)
			{
				lane.pop();
				truck++;
			}
			if(ar[i]==truck)
			{
				truck++;
			}
			else if(!lane.empty() && lane.top()<ar[i])
			{
				state=false;
				break;
			}
			else
			{
				lane.push(ar[i]);
			}
		}
		if(state)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
