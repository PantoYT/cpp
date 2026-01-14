#include <iostream>
using namespace std;
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    a*=2;
    cout<<a;
    return 0;
}
