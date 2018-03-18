//Will It Ever Stop
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long num;
	cin>>num;
	long long test=1;
	int i=1;
	bool flag=false;
	while(test<num)
	{
		test=pow(2,i++);
		if(test==num)
			flag=true;
	}
	if(flag)
		cout<<"TAK\n";
	else
		cout<<"NIE\n";
	return 0;
}
