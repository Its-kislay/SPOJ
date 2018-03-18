//DFS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int v,maxheight=0;
char *color=new char[v];
void dfs_visit(vector<int> *G,int u)
{
	for(int j=0;j<G[u].size();j++)
		{
			
			if(color[G[u][j]]=='W')
				dfs_visit(G,G[u][j]);
		}
}
void dfs(vector<int> *Graph,int s)
{
	for(int i=0;i<v;i++)
	{
		color[i]='W';
	}
	dfs_visit(Graph,s);
	for(int i=0;i<v;i++)
	{
		if(color[i]=='W')
			dfs_visit(Graph,i);
	}
}
int main()
{
	cout<<"Enter number of vertices: ";
	cin>>v;
	vector<int> *Graph=new vector<int>[v];
	int src,dest;
	while(1)
	{
		
		cout<<"Enter source and destination: ";
		cin>>src>>dest;
		if(src==-1)
			break;
		Graph[src].push_back(dest);
		Graph[dest].push_back(src);
	}
	dfs(Graph,0);
	cout<<endl;
	bfs(Graph,0);
	return 0;
}
