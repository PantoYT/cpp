#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int depth=0;
        int wynik=0;
        string linia;
        cin>>linia;
        for (int i=0;i<linia.length();i++) {
            if (linia[i] == '(' || linia[i] == '[' || linia[i] == '{' || linia[i] == '<') {
                depth++;
            } else {
                depth--;
            }

            if (depth == 0) {
                wynik++;
            }
        }
        cout<<wynik<<"\n";
    }
    return 0;
}