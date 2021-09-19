#include"graph.h"
#include<iostream>
#include<vector>
using namespace std;
graph::graph(vector<edge> E, int N)
{
	g.resize(N);
	for (int i = 0; i < E.size(); i++)
		g[E[i].src].push_back(E[i].dest);
}
//-------------------------------------------------
void graph::printGraph()
{
	int i = 0;
	int j;
	for (i = 0;i < this->g.size();i++)
	{
		
		for (j = 0;j < this->g[i].size();j++)
		{
			cout << i << "->";
			cout << g[i][j] << " ";
		}
		cout << "\n";
	}
}
//-------------------------------------------------
bool graph::findConnection(int src, int dest)
{
	for(int i=0;i<this->g[src].size();i++)
		if (this->g[src][i] == dest)
			return true;
	return false;
}
//-------------------------------------------------
bool graph::findRelationship(int A, int B)
{
	auto gt=this->g;
	if (this->findConnection(A, B))
		return true;
	else
	{ 
		int i;
		for (i = 0;i < gt[A].size();i++)
		{
			if (this->findConnection(gt[A][i],B))
				return true;
		}
		for (i = 0;i < gt[B].size();i++)
		{
			if(this->findConnection(gt[B][i],A))
				return true;
		}
	}
	return false;
}
