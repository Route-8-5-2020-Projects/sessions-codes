#include <iostream>
#include <vector>
using namespace std;

bool found = false;
int endNode;
vector<vector<int>> graph;


void dfs(int currentNode, int parentNode)
{
	if (currentNode == endNode)
	{
		found = true;
		return;
	}

	for (int i = 0; i < graph[currentNode].size(); i++)
	{
		int child = graph[currentNode][i];

		if (child != parentNode)
		{
			dfs(child, currentNode);
		}
	}

}

int main()
{
	int nodes, edges, startNode;
	cin >> nodes >> edges >> startNode >> endNode;
	graph.resize(nodes + 1);
	for (int i = 0; i < edges; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	//traversing
	dfs(startNode, -1);

	if (found)
		cout << "Yes there's a path";
	else
		cout << "No path found";
	return 0;
}