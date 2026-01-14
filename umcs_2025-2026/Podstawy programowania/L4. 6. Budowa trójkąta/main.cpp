#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>c;
    int najd = a;
    if (najd<b) {
        najd=b;
    }
    if (najd<c) {
        najd=c;
    }
    int suma = a+b+c;
    if (suma-najd>=najd) {
        cout<<"TAK\n";
    } else {
        cout<<"NIE\n";
    }
    return 0;
}
