//Is given graph is tree
#include<bits/stdc++.h>
using namespace std;
int u,v,n,m;
vector<int> graph[10002];
bool dfs(vector<int>graph[],int u)
{
	bool nodevisited[n+1];
	stack<int> s;
	for(int i=0;i<=n;i++)
		nodevisited[i]=false;
	s.push(u);
	int temp,temp2,twograph_check=0;
	while(!s.empty())
	{
		twograph_check++;
		temp=s.top();
		s.pop();
		if(nodevisited[temp])
			return false;
		else
		{
			nodevisited[temp]=true;
			for(int i=0;i<graph[temp].size();i++)
			{	
				temp2=graph[temp][i];
				s.push(temp2);
			}
		}
	}
	if(twograph_check!=n)
		return false;
	else
	{
		return true;
	}
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		graph[u].push_back(v);
	}
	if(dfs(graph,1)&& m+1==n)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}








