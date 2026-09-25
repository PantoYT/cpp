#include <iostream>
#include <vector>

using namespace std;

vector<int> divider(int n)
{
    vector<int> dzielniki;
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            dzielniki.push_back(i);
        }
    }
    return dzielniki;
}

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> dividers = divider(n);
    for (int& i : dividers) {
        cout<<i<<" ";
    }
}
