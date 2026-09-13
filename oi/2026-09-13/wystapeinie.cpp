#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> liczby(n);
    for (int& element : liczby) {
        cin >> element;
    }
    int szukana,pierwsza,ostatnia;
    pierwsza = ostatnia = -1;
    cin>>szukana;
    for (int i = 0;i<n;i++) {
        if (liczby[i]==szukana) {
            if (pierwsza==-1) {
                pierwsza=i;
            }
            ostatnia = i;
        }
    }
    if (pierwsza == -1)  {
        cout<<"NIE"<<"\n";
    } else {
        cout<<pierwsza<<" "<<ostatnia<<"\n";
    }


    return 0;
}
