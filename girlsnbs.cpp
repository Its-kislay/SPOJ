//girlsnbs
#include<iostream>
using namespace std;
int main()
{
	while(1)
	{	
		int m,n;
		cin>>m>>n;
		if(m==-1 || n==-1)
			break;
		else if(m==0 && n==0)
			cout<<0<<endl;
		else if(m==0)
			cout<<n<<endl;
		else if(n==0)
			cout<<m<<endl;
		else if(m==n)
			cout<<1<<endl;
		else
		{
		if(n>m)
		{	
			int temp=m;
			m=n;
			n=temp;
		}
		m=m-1;
		n=n+1;
		cout<<(m/n+1)<<endl;
		}
	}
	return 0;
}
