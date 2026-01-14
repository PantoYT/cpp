#include <iostream>
using namespace std;
int main()
{
    unsigned int a,rok;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>rok;
    if ((a%2==0) && (rok%2==0)) {
        cout<<"1\n";
    } else {
        cout<<"-1\n";
    }
    return 0;
}
