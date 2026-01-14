#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>c;
    bool wszystkiedodatnie = true;
    if (a<=0) {
        cout<<a<<"\n";
        wszystkiedodatnie = false;
    }
    if (b<=0) {
        cout<<b<<"\n";
        wszystkiedodatnie = false;
    }
    if (c<=0) {
        cout<<c<<"\n";
        wszystkiedodatnie = false;
    }
    if (wszystkiedodatnie==true) {
        cout<<1;
    }
    return 0;
}
