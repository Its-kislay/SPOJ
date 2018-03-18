//Is it a tree
//Whether the given graph is a tree or not
//Detecting a cycle in a graph
#include<iostream>
#include <list>
#include <limits.h>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v,bool visited[],int parent);
	public:
		Graph(int V);
		void addEdge(int v,int w);
		bool isTree();
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}
bool Graph::isCyclicUtil(int v,bool visited[],int parent)
{
	visited[v]=true;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i])
		{
			if(isCyclicUtil(*i,visited,v))
				return true;
		}
		else if(*i!=parent)
			return true;
	}
	return false;
}
bool Graph::isTree()
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	if(isCyclicUtil(0,visited,-1))
		return false;
	for(int u=0;u<V;u++)
	{
		if(!visited[u])
			return false;
	}
	return true;
}
int main()
{
	int nodes,edges;
    cin>>nodes>>edges;
	Graph g1(nodes);
	while(edges--)
    {
        int u,v;
        cin>>u>>v;
        g1.addEdge(u, v);
    }
    g1.isTree()? cout << "Graph is Tree\n":
                 cout << "Graph is not Tree\n";
	return 0;
}

