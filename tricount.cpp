//Count the number of triangles
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int level,res;
		cin>>level;
		res=((level)*(level+2)*(2*level+1))/8;
		cout<<res<<endl;
	}
	return 0;
}

