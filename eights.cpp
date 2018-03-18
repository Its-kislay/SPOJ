//Eights
#include<iostream>
#define ull unsigned long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	ull num;
	int diff=250;    	//Common difference
	ull result;
	while(t--)
	{
		cin>>num;
		result=192;
		result=result+(num-1)*diff;
		cout<<result<<endl;
	}
	return 0;
}
