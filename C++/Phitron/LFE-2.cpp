// Know_Your_Level
// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

// Driver code
int main()
{
    int N, E;
    cin >> N >> E;

    vector<int> adj[N];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    printGraph(adj, N);
    return 0;
}
