#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// lecimy odrazu z grubej rury, ostatnio jak pisałem BFS to cierpiałem ale spróbujemy,
// czas zaczęcie 1:22 daty (patrz folder)

// to zacznijmy od czego jest BFS, BFS to algorytm skanowania grafu w szerz - breadth first serach, dobrym przykładem może być kod morsa, mamy dots and dashes . to e - to coś innego,
// i mamy kombinacje - BFS najpierw robi . potem - potem .. , .- , -. , -- gdzie DFS idzie odrazu . .. .. .... czy coś, bla bla bla, najważniejsze wiem, teraz jak to zaimplementować?

// czy void może zwracać długość i NIE? przekonamy się :p
// pewnie da się jakoś zrobić lepiej wejście do funkcji ale walić
void BFS(const vector<vector<int>>& graph, int s, int t)
{
    // okej jestem zgubiony, vector to tablica? jakby tak to rozumiem, a potem vector vectora to tablica tablicy, ale czymś to się zdecydowanie różni,
    int n = graph.size();
    vector<int> dist(n, -1);
    vector<int> parent(n, -1);
    queue<int> q;

    dist[s] = 0;
    q.push(s);

    // szczerze nie mam pojęcia co mam zrobić,
    // najpierw trzeba zainicjować graf, czyli to jest lista połączeń między punktami, mamy jego wielkość ilość połączeń start i cel, i mamy napisać BFS czyli musimy po kolei skanować w szerz,
    // kolejne połączone punkty od punkty A; następnie i tak dalej i tak dalej, vector int narzeka bo n nie jest zadeklarowane, chuj to ma być w main czy bfs?

    while (!q.empty()) 
    {
        int u = q.front();
        q.pop();
        // tutaj oglądasz każdego sąsiada u
        // co tu robi dwukropek? przypisuje?
        for (int v : graph[u]) 
        {
            // v jest sąsiadem u
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    if (dist[t] == -1) {
        cout << "NIE\n";
    } else {
        cout << dist[t] << "\n";
    }
}

int main()
{
    // jedyne co zkopiuje to magiczne linijki tutaj:
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // n = wierszchłki
    // m = krawędzie
    // s = start
    // t = cel
    int n,m,s,t;
    cin>>n>>m>>s>>t;

    vector<vector<int>> graph(n);

    for (int i=0;i<m;i++) {
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    BFS(graph, s, t);

    return 0;
}