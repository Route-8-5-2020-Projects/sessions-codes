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
		cin >> u >> v >> cost;
		graph[u].push_back({ v, cost });
		graph[v].push_back({ u, cost });
	}

	priority_queue<pair<long long, int>>pq;
	long long maxLength[1005];
	for (int i = 1; i <= nodes; i++)
		maxLength[i] = 1e18;
	maxLength[startNode] = 0;
	pq.push({0, startNode});
	while (pq.empty() == false)
	{
		long long lengthSoFar = -pq.top().first;
		int currentNode = pq.top().second;
		pq.pop();

		if (currentNode == endNode)
		{
			cout << lengthSoFar;
			return 0;
		}

		if (lengthSoFar != maxLength[currentNode])
		{
			continue;
		}

		for (int i = 0; i < graph[currentNode].size(); i++)
		{
			int child = graph[currentNode][i].first;
			long long cost = graph[currentNode][i].second;
			long long newCostToChild = cost + lengthSoFar;

			if (newCostToChild < maxLength[child])
			{
				maxLength[child] = newCostToChild;
				pq.push({-newCostToChild, child});
			}
		}

	}

	cout << "No Path Exist";

	return 0;
}