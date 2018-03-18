//Count on Cantor
#include<iostream>
using namespace std;
int finddiag(int num)
{
	int n=1;
	int sum=0;
	while(sum<num)
	{
		sum+=n;
		n++;
	}
	return n;
}
int findindex(int num)
{
	return (num*(num+1))/2;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		int diag;
		cin>>n;
		diag=finddiag(n);
		diag--;
		int initialindex=findindex(diag-1)+1;
		int numerator,denominator;
		if(diag%2==0)
		{
			numerator=1;
			denominator=diag;
			while(initialindex!=n)
			{
				initialindex++;
				numerator++;
				denominator--;
			}
		}
		else
		{
			numerator=diag;
			denominator=1;
			while(initialindex!=n)
			{
				initialindex++;
				numerator--;
				denominator++;
			}
		}
		cout<<"TERM "<<n<<" IS "<<numerator<<"/"<<denominator<<endl;
	}
	return 0;
}
