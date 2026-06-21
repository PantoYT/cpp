#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// === ALGORYTM DFS (W głąb) ===
// const vector<vector<int>>& graph -> przekazujemy graf przez referencję, żeby było szybko
void dfs(int start, const vector<vector<int>>& graph, vector<bool>& odwiedzony) {
    odwiedzony[start] = true;
    cout << start << " ";

    for(int sasiad : graph[start]) {
        if(!odwiedzony[sasiad]) {
            dfs(sasiad, graph, odwiedzony); // Idziemy głębiej
        }
    }
}

// === ALGORYTM BFS (W szerz) ===
void bfs(int start, const vector<vector<int>>& graph, vector<bool>& odwiedzony) {
    queue<int> kolejka;

    odwiedzony[start] = true;
    kolejka.push(start);

    while(!kolejka.empty()) {
        int obecny = kolejka.front();
        kolejka.pop();
        cout << obecny << " ";

        for(int sasiad : graph[obecny]) {
            if(!odwiedzony[sasiad]) {
                odwiedzony[sasiad] = true;
                kolejka.push(sasiad); // Wrzucamy sąsiada na koniec kolejki
            }
        }
    }
}

int main() {
    int liczba_wierzcholkow = 6;
    
    // Tworzymy w pełni dynamiczny graf posiadający domyślnie 6 czystych wektorów
    vector<vector<int>> graph(liczba_wierzcholkow);

    // Dynamiczny wektor na odwiedzonych (zastępuje starą tablicę bool)
    // fill(6, false) oznacza: stwórz 6 elementów i ustaw każdy na 'false'
    vector<bool> odwiedzony(liczba_wierzcholkow, false);

    // Uzupełniamy połączenia (dokładnie tak samo jak wcześniej)
    graph[0].push_back(1); graph[0].push_back(2);
    graph[1].push_back(0); graph[1].push_back(3); graph[1].push_back(4);
    graph[2].push_back(0); graph[2].push_back(5);
    graph[3].push_back(1);
    graph[4].push_back(1);
    graph[5].push_back(2);

    cout << "--- TEST DFS (W głąb) ---" << endl;
    dfs(0, graph, odwiedzony);
    cout << endl << endl;

    // Resetujemy wektor odwiedzonych przed odpaleniem BFS
    // .assign() nadpisuje cały wektor nowymi wartościami false
    odwiedzony.assign(liczba_wierzcholkow, false);

    cout << "--- TEST BFS (W szerz) ---" << endl;
    bfs(0, graph, odwiedzony);
    cout << endl;

    return 0;
}