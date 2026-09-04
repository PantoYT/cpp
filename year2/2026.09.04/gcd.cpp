#include <iostream>
#include <algorithm>

using namespace std;


int rzad(int goscie, int gospodarze) {
    return __gcd(goscie,gospodarze);
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    
    int goscie, gospodarze;
    cin>>goscie>>gospodarze;
    // 72 i 90 daje 18
    // 24 i 36 daje 12
    cout<<rzad(goscie, gospodarze);
}
