#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string tekst;
    int shift=3;
    getline (cin,tekst);
    for (char c:tekst) {
        if(c==' ') {
            cout<<' ';
        } else {
            char encrypted = 'A' + (c -'A' + shift)%26;
            cout<<encrypted;
        }
    }
    return 0;
}
