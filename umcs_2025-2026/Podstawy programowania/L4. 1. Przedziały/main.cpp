#include <iostream>
using namespace std;
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    if ((a>=-20 && a<=-10) || (a>=5 && a<=15)) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
    return 0;
}
