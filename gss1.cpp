//Segment Tree
#include<iostream>
#include<math.h>
using namespace std;

int getSumUtil(int* tree,int ss,int se,int qs,int qe,int si)
{
	if(qs <= ss && se <= qe)
	{
		return tree[si];
	}
	if(qs > se || ss > qe)
		return 0;
	int mid=(ss+se)/2;
	int left=getSumUtil(tree,ss,mid,qs,qe,2*si+1);
	int right=getSumUtil(tree,mid+1,se,qs,qe,2*si+2);
	if(left+right >= left && left+right >= right)
		 return left+right;
	else if(left+right <left)
		return left;
	else
		return right;
}

int getSum(int *tree,int n,int qs,int qe)
{
	if(qs <0 || qe>(n-1) || qs>qe)
		return -1;
	return getSumUtil(tree,0,n-1,qs,qe,0);
}
int constructUtil(int ar[],int ss,int se,int* tree,int si)
{
	if(ss==se)
	{
		tree[si]=ar[ss];
		return ar[ss];
	}
	int mid=(ss+se)/2;
	int left=constructUtil(ar,ss,mid,tree,2*si+1);
	int right=constructUtil(ar,mid+1,se,tree,2*si+2);
	int sum=left + right;
	if(sum>right)
		tree[si]=sum;
	else if(right>sum)
		
	else
		tree[si]=0;
	return tree[si];
}
int* construct(int ar[],int n)
{
	int h=int(ceil(log2(n)));
	int max_size=2*int(pow(2,h))-1;
	int* tree=new int[max_size];
	constructUtil(ar,0,n-1,tree,0);
	return tree;
}
int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
	unsigned int n,t,x,y,sum;
	cin>>n;
	int *ar=new int[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	cin>>t;
	int *tree=construct(ar,n);
	while(t--)
	{
		cin>>x>>y;
		sum=getSum(tree,n,x,y);
		cout<<sum<<endl;
	}
}










