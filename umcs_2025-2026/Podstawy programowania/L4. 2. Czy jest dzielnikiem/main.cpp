#include <iostream>
using namespace std;
int main()
{
    int a,b;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b;
    if ((a%b==0) || (b%a==0)) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
    return 0;
}
