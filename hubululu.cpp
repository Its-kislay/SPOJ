#include <iostream>
using namespace std;

int main() {
	
	int t;
	long m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(n==0)
			cout<<"Airborne wins.\n";
		else
			cout<<"Pagfloyd wins.\n";
	}

	return 0;
}
