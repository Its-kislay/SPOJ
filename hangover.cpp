//Hangover
#include<iostream>
using namespace std;
int main()
{
	float num;
	while(1)
	{
		cin>>num;
		if(num==0.00)
			break;
		else
		{
			float res=0.00;
			int i=1;
			while(1)
			{
				res+=1.00/float(i+1);
				if(num<=res)
					break;
				i++;
			}
			cout<<i<<" card(s)"<<endl;			
		}
	}
	return 0;
}
