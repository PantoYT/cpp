#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addEdge(vector<vector<int>> & graf, int u, int v)
{
    graf[u].push_back(v);
    graf[v].push_back(u);
}

void BFS(const vector<vector<int>> & graf, vector<bool> & Seen, int start)
{
    queue<int> Q;
    Q.push(start);
    Seen[start] = true;
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
            
        for (int v : graf[u]) 
        {
            if (!Seen[v])
            {
                Seen[v] = true;
                Q.push(v);
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    
    int V, E;
    cin >> V >> E;
    
    vector<vector<int>> Graph(V);
    vector<bool> Seen(V, false);
    
    int edgeCount = E;
    while (edgeCount)
    {
        int u, v;
        cin >> u >> v;
        addEdge(Graph, u, v);
        edgeCount--;
    }
    
    int skladowe = 0;

    for (int i = 0; i < V; i++) 
    {
        if (!Seen[i]) 
        {
            skladowe++;
            BFS(Graph, Seen, i); 
        }
    }

    if (V == 0) {
        cout << 0 << "\n";
    } else {
        cout << skladowe - 1 << "\n";
    }

    return 0;
}