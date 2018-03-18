//Finding a graph is a tree or not
//Union-Find
#include<bits/stdc++.h>
using namespace std;
struct Edges;
struct Graph
{
	int V,E;
	Edges *edge;
};
struct Edges
{
	int src,dest;
};
Graph* createGraph(int v,int e)
{
	Graph *graph=new Graph;
	graph->V=v;
	graph->E=e;
	graph->edge=new Edges[e];
	return graph;
}
int find(int parent[],int i)
{
	if(parent[i]==-1)
		return i;
	return find(parent,parent[i]);
}
void Union(int parent[],int x,int y)
{
	int xset=find(parent,x);
	int yset=find(parent,y);
	parent[xset]=yset;
}
bool isCycle(Graph *G)
{
	int *parent=new int[G->V];
	memset(parent,-1,sizeof(int)*G->V);
	for(int i=0;i<G->E;i++)
	{
		int x=find(parent,G->edge[i].src);
		int y=find(parent,G->edge[i].dest);
		if(x==y)
			return true;
		Union(parent,x,y);
	}
	return false;
}
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	Graph *G=createGraph(nodes,edges);
	G->V=nodes;
	G->E=edges;
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin>>u>>v;
		G->edge[i].src=u;
		G->edge[i].dest=v;
	}
	isCycle(G)?cout<<"NO\n":cout<<"YES\n";
	return 0;
}
