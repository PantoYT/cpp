#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,delta;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>c;
    delta = (pow(b,2))-4*a*c;
    if (delta >= 0) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
    return 0;
}
