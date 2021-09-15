#pragma once
#include<iostream>
#include<vector>
using namespace std;

struct edge {
	int src, dest;
};
class graph
{
private:
	vector<vector<int>> g;
public:
	graph(vector<edge> E, int N);
	void printGraph();
	bool findConnection(int src, int dest);
	bool findRelationship(int A, int B);
	
	
	
};


