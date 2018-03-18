//Inversion Count
//Fenwick Tree or Binary Indexed Tree
#include<bits/stdc++.h>
using namespace std;
int getSum(int BITree[],int index)
{
	int sum=0;
	while(index>0)
	{
		sum+=BITree[index];
		index-=index&(-index);
	}
	return sum;
}
void update(int BITree[],int n,int index,int val)
{
	while(index<=n)
	{
		BITree[index]+=val;
		index+=index&(-index);
	}
}
void convert(long long int arr[], int n)
{
		int temp[n];
    for (int i=0; i<n; i++)
        temp[i] = arr[i];
    sort(temp, temp+n);
 		for (int i=0; i<n; i++)
    {
        arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1;
    }
}
int inverseCount(long long int ar[],int n)
{
	int invCnt=0;
	int maxElement=0;
	convert(ar,n);
	for(int i=0;i<n;i++)
		if(maxElement<ar[i])
			maxElement=ar[i];
	int* BITree=new int[maxElement+1];
	for(int i=1;i<=maxElement;i++)
		BITree[i]=0;
	for(int i=n-1;i>=0;i--)
	{
		invCnt += getSum(BITree,ar[i]-1);
		update(BITree,maxElement,ar[i],1);
	}
	return invCnt;
}
int main()
{
	int t,n,res;
	cin>>t;
	while(t--)
	{	
		long long int ar[200000];
		cin.ignore();
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		res=inverseCount(ar,n);
		cout<<res<<endl;	
	}
	return 0;
}
