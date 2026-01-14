#include <iostream>
using namespace std;
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    if (a%2==0){
        cout<<1;
    } else {
        cout<<0;
    }
    return 0;
}
