#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n, out;
    if (cin >> n) {
        out = czy_pierwsza(n);
        cout << out << "\n";
    }
    return 0;
}
