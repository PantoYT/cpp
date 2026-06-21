#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Krawedz {
    int do_wierzcholka;
    long long waga;
};
struct Stan {
    long long koszt;
    int wierzcholek;
    bool operator>(const Stan& inny) const {
        return koszt > inny.koszt;
    }
};
const long long INF = 1e18;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int V, E;
    if (!(cin >> V >> E)) return 0;
    struct SurowaKrawedz {
        int u, v;
        long long d;
    };
    vector<SurowaKrawedz> surowe_krawedzie(E);
    for (int i = 0; i < E; ++i) {
        cin >> surowe_krawedzie[i].u >> surowe_krawedzie[i].v >> surowe_krawedzie[i].d;
    }
    vector<long long> koszt_wejscia(V);
    for (int i = 0; i < V; ++i) {
        cin >> koszt_wejscia[i];
    }
    vector<vector<Krawedz>> graf(V);
    for (int i = 0; i < E; ++i) {
        int u = surowe_krawedzie[i].u;
        int v = surowe_krawedzie[i].v;
        long long d = surowe_krawedzie[i].d;
        graf[u].push_back({v, d + koszt_wejscia[v]});
    }
    int n;
    cin >> n;
    vector<int> cele(n);
    for (int i = 0; i < n; ++i) {
        cin >> cele[i];
    }
    int s;
    cin >> s;
    vector<long long> dystans(V, INF);
    priority_queue<Stan, vector<Stan>, greater<Stan>> pq;
    dystans[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        Stan aktualny = pq.top();
        pq.pop();
        int u = aktualny.wierzcholek;
        long long u_koszt = aktualny.koszt;
        if (u_koszt > dystans[u]) continue;
        for (const auto& krawedz : graf[u]) {
            int v = krawedz.do_wierzcholka;
            long long waga = krawedz.waga;
            if (dystans[u] + waga < dystans[v]) {
                dystans[v] = dystans[u] + waga;
                pq.push({dystans[v], v});
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        int cel = cele[i];
        if (dystans[cel] == INF) {
            cout << "NIE\n";
        } else {
            cout << dystans[cel] << "\n";
        }
    }
    return 0;
}
