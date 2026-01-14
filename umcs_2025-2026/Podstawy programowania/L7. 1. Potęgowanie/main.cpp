#include <iostream>
#include <cmath>
using namespace std;

void potegowanie(unsigned int k) {
    int wynik = 0;
    for(int i=1;i<=5;i++) {
        wynik=pow(k,i);
        cout<<wynik<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int k;
    cin>>k;
    potegowanie(k);
    return 0;
}

