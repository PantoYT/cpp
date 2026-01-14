#include <iostream>
using namespace std;
int main()
{
    bool a;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    if (a == true) {
        cout<<0;
    } else {
        cout<<1;
    }
    return 0;
}
