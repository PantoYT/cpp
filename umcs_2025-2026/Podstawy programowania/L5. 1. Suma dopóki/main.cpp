#include <iostream>
using namespace std;
int main()
{
    int a,suma=0;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    while (true) {
        cin>>a;
        if (a!=0) {
            suma+=a;
        } else {
            cout<<suma<<"\n";
            break;
        }
    }
    return 0;
}
