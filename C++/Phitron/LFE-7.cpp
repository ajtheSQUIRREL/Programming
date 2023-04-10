#include <bits/stdc++.h>

// Kamal's_Neighbourhood_I
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    int adjMat[N + 1][N + 1];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
    int k, count = 0;
    cin >> k;
    for (int i = 0; i < E; i++)
    {
        if (adjMat[k][i] == 1)
            count++;
    }
    cout << count << endl;
}
