// graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include "graph.h"
using namespace std;
int main()
{
	int i = 0;
	char ch;
	int n;
	vector<edge> e;
	edge e1;
	do
	{
		i++;
		cout << "Enter edges of your graph:\n source and then destenation\n";
		cin >> e1.src >> e1.dest;
		e.push_back(e1);
		cout << "do you want to continue? Y/N\n";
		cin >> ch;
	} while (tolower(ch)!='n');
	graph g(e, i);
	g.printGraph();
	int a, b;
	cout << "Enter 2 node to check is there any edge between them!\n";
	cin >> a >> b;
	if (g.findConnection(a, b))
		cout << "Yes, this edge is available!\n";
	else
	{
		if (g.findRelationship(a, b))
			cout << "this edge is not available! BUT there is a relationship between them!";
		else
			cout << "this edge is not available AND Also there isn't any relationships between them!";
	}
	return 0;

	
 }


