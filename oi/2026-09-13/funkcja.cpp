#include <iostream>
#include <vector>

using namespace std;

int funkcja(const vector<int>&liczby) {
    int evenSum = 0;
    for (int i : liczby) {
        if (i%2==0) {
            evenSum+=i;
        }
    }
    return evenSum;
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
    cout<<funkcja(liczby)<<"\n";
}