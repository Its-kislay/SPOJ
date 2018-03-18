//The NExt Palindrome
#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;
void findNextPalindrome(string &num);
void nextPalindrome(string &num);
int allnines(string &str);			//To check if numbers have all 9
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string num;
		cin>>num;
		fflush(stdin);
		findNextPalindrome(num);
	}
	return 0;
}

int allnines(string &str)
{
	int i=0;
	int len=str.length();
	for(i;i<len;i++)
		if(str[i]!='9')
			return 0;
	return 1;
}

void findNextPalindrome(string &num)
{
	int len=num.length();
	int flag=allnines(num);
	if(flag)
	{
		cout<<"1";
		for(int i=1;i<len;i++)
			cout<<"0";
		cout<<"1"<<endl;
	}
	else
	{
		nextPalindrome(num);
		cout<<num<<endl;
	}
}
void nextPalindrome(string &num)
{
	int len=num.length();
	int mid=len/2;
	int i=mid-1;
	int j=(len%2) ? mid+1 : mid;
	bool leftSmaller=false;
	while(i>=0 && num[i]==num[j])
		i--,j++;
	if(i<0 || num[i]<num[j])
		leftSmaller=true;
	while(i>=0)
	{
		num[j]=num[i];
		i--;
		j++;
	}
	if(leftSmaller)
	{
		int carry=1;
		i=mid-1;
		if(len%2 == 1)
		{
			int temp;
			temp = ((num[mid]-'0')+carry);
			if((temp/10)==1)
				num[mid]='0';
			else
				num[mid]=temp+'0';
			carry = temp/10;
			j=mid+1;
		}
		else
			j=mid;	
		while(i>=0)
		{
			int temp;
			temp = ((num[i]-'0')+carry);
			if((temp/10)==1)
				num[i]='0';
			else
				num[i]=temp+'0';
			carry = temp/10;
			num[j++]=num[i--];
		}	
	}
}






