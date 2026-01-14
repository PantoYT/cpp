#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        string linia;
        int k;
        cin>>linia>>k;

        sort(linia.begin(), linia.end());
        k--;
        while (k--) {
            next_permutation(linia.begin(), linia.end());
        }
        cout<<linia<<"\n";
    }
}