#include <iostream>

using namespace std;

int main()
{
    int pkt=0,f=0;
    double so=0;
    cin>>f>>so;
    if (f > 94 && so >= 4.0) {
        pkt+=20;
    }
    cout<<pkt;
    return 0;
}