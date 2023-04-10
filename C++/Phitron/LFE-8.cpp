#include <iostream>
#include <queue>

// Kamal's_Neighbourhood_II
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
    }
    int k, count = 0;
    cin >> k;
    queue<int> Q;
    for (int i = 0; i < E; i++)
    {
        if (adjMat[k][i] == 1)
        {
            count++;
            Q.push(i);
        }
    }
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for (int i = 0; i < E; i++)
        {
            if (adjMat[x][i] == 1)
            {
                if (x != k && i != k)
                {
                    count++;
                    Q.push(i);
                }
            }
        }
    }
    cout << count << endl;
}
