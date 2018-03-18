//Anti Blot System
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		fflush(stdin);
		string equation;
		string part1,part2,part3;
		getline(cin,equation);
		while(equation.length()==0)
			getline(cin,equation);
		fflush(stdin);
		int i=0;
		int plus,equals;
		plus=equation.find('+');
		equals=equation.find('=');
		int len1=plus-1;
		int len2=(equals-1)-(plus+1);
		int len3=equation.length()-equals+1;
		
		part1=equation.substr(0,len1);
		part2=equation.substr(plus+1,len2);
		part3=equation.substr(equals+1,len3);
		if(part1.find("machula")!=-1)
		{
			stringstream geek1(part2);
			stringstream geek2(part3);
			int num2=0;
			geek1>>num2;
			int res=0;
			geek2>>res;
			int num1 = res - num2;
			cout<<num1<<" + "<<num2<<" = "<<res<<endl;
		}
    
		else if(part2.find("machula")!=-1)
		{
			stringstream geek1(part1);
			stringstream geek2(part3);
			int num1=0;
			geek1>>num1;
			int res=0;
			geek2>>res;
			int num2 = res - num1;
			cout<<num1<<" + "<<num2<<" = "<<res<<endl;
		}
		else
		{
			stringstream geek1(part1);
			stringstream geek2(part2);
			int num1=0;
			geek1>>num1;
			int num2=0;
			geek2>>num2;
			int res = num2 + num1;
			cout<<num1<<" + "<<num2<<" = "<<res<<endl;
		}
	}
	return 0;
}
