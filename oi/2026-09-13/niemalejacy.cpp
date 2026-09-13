#include <iostream>
#include <vector>

using namespace std;

static bool czyNiemalejacy(const vector<int>& liczby) {
    int n = liczby.size();
    for (int i=1;i<n;i++) {
        if (liczby[i] < liczby[i-1]) {
            return false;
        }
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
    if (czyNiemalejacy(liczby)) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
}