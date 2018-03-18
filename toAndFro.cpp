#include<bits/stdc++.h>
using namespace std;


int main()
{
	int col;
	while(1)
	{
		cin>>col;
		if(col==0)
			break;
		string msg;
		cin>>msg;
		int l=msg.length();
		int row=l/col;
		char message[row][col];
		char c='l';
		int i=0;
		int j=0,k=0,m;
		while(msg[i]!='\0')
		{
			if(c=='l')
			{
				for(k=0;k<col;k++)
				{
					message[j][k]=msg[i];
					i++;
				}
				j++;
				c='r';
			}
			else
			{
				for(k=col-1;k>=0;k--)
				{
					message[j][k]=msg[i];
					i++;
				}
				j++;
				c='l';
			}
		}
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				cout<<message[j][i];
		cout<<endl;
	}
	return 0;
}

