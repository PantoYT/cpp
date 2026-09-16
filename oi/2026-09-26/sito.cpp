#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void sito(vector<int>& liczby, int max) {
    vector<bool> czy_pierwsza(max + 1, true);
    
    czy_pierwsza[0] = false;
    czy_pierwsza[1] = false;

    int limit = sqrt(max);
    for (int i = 2; i <= limit; i++) {
        if (czy_pierwsza[i]) {
            for (int j = i * i; j <= max; j += i) {
                czy_pierwsza[j] = false;
            }
        }
    }

    for (int& x : liczby) {
        if (!czy_pierwsza[x]) {
            x = 0; // Przykładowe oznaczenie, że liczba nie jest pierwsza
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> liczby(n);
    int maksymalna = 0;

    for (int& i : liczby) {
        cin >> i;
        if (i > maksymalna) {
            maksymalna = i;
        }
    }

    sito(liczby, maksymalna);

    for (int i : liczby) {
        if (i != 0) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
