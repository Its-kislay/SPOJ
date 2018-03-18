#include<bits/stdc++.h>
#include<stack>
using namespace std;
void convert(char exp[]);
int priority(char c);

int main()
{
	int t;
	char exp[400];
	cin>>t;
	while(t--)
	{
		cin>>exp;
		fflush(stdin);
		convert(exp);
	}
	return 0;	
}

int priority(char c)
{
	if(c=='^')
		return 3;
	else if(c=='/' || c=='*')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return -1;
}


void convert(char exp[])
{
  cout<<"inside";
	int i=0;
	stack<char> s;
	while(exp[i]!='\0')
	{
		if(exp[i]=='+' || exp[i]=='-' || exp[i]=='/' || exp[i]=='*' || exp[i]=='^' || exp[i]=='(')
		{
			while( ( priority(s.top()) >= priority(exp[i]) ) || (exp[i]!='(') || !s.empty())
			{
				cout<<s.top();
				s.pop();
			}
			if(s.top()=='(')
				s.pop();
			s.push(exp[i]);
		}
		else if(exp[i]==')')
		{
			while(exp[i]!='(')
			{
				cout<<s.top();
				s.pop();
			}
			s.pop();
		}
		else
		{
			cout<<exp[i];
		}
		i++;
		cout<<"HERE";
	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}
