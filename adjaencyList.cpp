#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
  unordered_map<int, list<pair<int, int>>> adjList;

  void addEdge(int u, int v, int weight, bool direction)
  {
    // direction = 0 -> undirected graph
    // direction = 1 -> directed graph
    adjList[u].push_back({v, weight});
    if (direction == 0)
    {
      // undirected edge
      adjList[v].push_back({u, weight});
    }
  }

  void printAdjaencyList()
  {
    for (auto node : adjList)
    {
      cout << node.first << "->";
      for (auto neighbour : node.second)
      {
        cout << "(" << neighbour.first << "," << neighbour.second << "),";
      }
      cout << endl;
    }
  }
};

int main()
{
  Graph g;
  g.addEdge(0, 1, 5, 0);
  g.addEdge(1, 2, 8, 0);
  g.addEdge(0, 2, 6, 0);
  cout << endl;
  g.printAdjaencyList();
  return 0;
}