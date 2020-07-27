#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool found = false;
int endNode;
vector<vector<pair<int, int>>> graph;
int length[10005];

int main()
{
	int nodes, edges, startNode;
	cin >> nodes >> edges >> startNode >> endNode;
	graph.resize(nodes + 1);
	for (int i = 0; i < edges; i++)
	{
		int u, v, cost;
		cin >> u >> v;
		graph[u].push_back({ v, cost });
		graph[v].push_back({ u, cost });
	}

	

	if (found)
		cout << length[endNode];
	else
		cout << "No path found";
	return 0;
}