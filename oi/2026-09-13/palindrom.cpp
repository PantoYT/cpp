#include <iostream>
#include <vector>
using namespace std;

static bool czyPalindrom(const vector<int>& liczby) {
    int len = liczby.size();
    int i = 0;
    int j = len-1;
    while (i < j) {
        if (liczby[i] != liczby[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int> liczby(n);
    for (int& i : liczby) {
        cin>>i;
    }
    if (czyPalindrom(liczby)) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
    return 0;
}