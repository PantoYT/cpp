#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> lista(n);

    for (int &element : lista) {
        cin >> element;
    }

    int szukana;
    cin >> szukana;
    bool znaleziona = false;
    for (int i = 0; i < n; i++) {
        if (lista[i] == szukana) {
            znaleziona = true;
            cout << i << "\n";
        }
    }
    if (!znaleziona) {
        cout<<"NIE\n";
    }

    return 0;
}
