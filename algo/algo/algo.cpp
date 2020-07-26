#include <iostream>
#include <vector>
using namespace std;


void constructingGraphUsingAdjMatrix(int nodes, int edges)
{
	int graph[105][105] = {};
	for (int i = 1; i <= nodes; i++)
		graph[i][i] = 1;

	for (int i = 1; i <= edges; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	for (int i = 1; i <= nodes; i++)
	{
		for (int j = 1; j <= nodes; j++)
			cout << graph[i][j] << ' ';
		cout << endl;
	}
}

void ConstructinGraphUsingAdjList(int nodes, int edges)
{
	vector<vector<int>> graph;
	graph.resize(nodes + 1);
	for (int i = 0; i < edges; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= nodes; i++)
	{
		cout << "node " << i << " children: ";
		for (int j = 0; j < graph[i].size(); j++)
			cout << graph[i][j] << ' ';
		cout << endl;
	}
}

int main()
{
	return 0;
}