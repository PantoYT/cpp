#include <iostream>
using namespace std;
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    if (a==1) {
        cout<<"Wiosna\n";
    } else if (a==2) {
        cout<<"Lato\n";
    } else if (a==3) {
        cout<<"Jesien\n";
    } else {
        cout<<"Zima\n";
    }
    return 0;
}
