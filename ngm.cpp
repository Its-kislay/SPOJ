//NGM
#include<iostream>
using namespace std;
int main()
{	
	unsigned int n;
	cin>>n;
	if(n%10==0)
		cout<<2<<endl;
	else
	{
		cout<<1<<endl;
		cout<<(n%10)<<endl;
	}
	return 0;
}
