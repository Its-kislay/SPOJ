//Aggresive Cows 
//Binary Search
#include<bits/stdc++.h>
using namespace std;
bool accomodate(int ar[],int stalls,int min,int cows)
{
	int lastplaced=ar[0],placed=1;
	for(int i=0;i<stalls;i++)
	{
		if(ar[i]-lastplaced>=min)
		{
			lastplaced=ar[i];
			placed++;
		}
		if(placed==cows)
			return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int stalls,cows;
		cin>>stalls>>cows;
		int ar[100000];
		for(int i=0;i<stalls;i++)
			cin>>ar[i];
		sort(ar,ar+stalls);
		//We'll do a binary search over all the possible values for min dist
		int low=0,high=ar[stalls-1]-ar[0],mid;						//low is lowest min distance and high is highest min dist
		while(high-low > 1)
		{	
			mid=low + (high-low)/2;
			if(accomodate(ar,stalls,mid,cows))
			{
				low=mid;
			}
			else
				high=mid;
		}
		cout<<low<<endl;
	}
	return 0;
}
