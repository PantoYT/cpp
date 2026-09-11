#include <iostream>
#include <unordered_map>
#include <string>

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

int blizniacze(int n)
{
    int i = 2;
    int numer = 0;
    while (numer < n)
    {
        if (czy_pierwsza(i) && czy_pierwsza(i+2)) {
            numer++;
        }
        i++;
        if (numer == n) {
            return i-1;
        }
    }
    return -1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n,counter=0;
    cin>>n;
    cout<<blizniacze(n)<<"\n";
    return 0;
}
