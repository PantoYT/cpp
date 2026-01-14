#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string tekst,wzorzec;
    bool czytak=false;
    getline(cin,tekst);
    getline(cin,wzorzec);
    if (wzorzec.length()>tekst.length()) {
        cout<<"NIE";
        return 0;
    } else {
        for (int i=0;i<=tekst.length()-wzorzec.length();i++) {
            if (tekst.substr(i, wzorzec.length())==wzorzec) {
                cout<<i<<" ";
                czytak=true;
            }
        }
    }
    if (czytak==false) cout<<"NIE";
    return 0;
}
