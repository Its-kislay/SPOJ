//beenums
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	unsigned long long int sum,num;
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		num=0,sum=1;
		while(sum<n)
		{
			sum=((6*num)+sum);
			if(sum==n)
				break;
			num++;
		}
		
		if(sum==n)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}
