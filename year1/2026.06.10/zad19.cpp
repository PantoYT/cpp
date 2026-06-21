#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    unsigned int rozmiar;
    cin>>rozmiar;
    bool stan = false;
    for (unsigned int i=0;i<rozmiar;i++)
    {
        for (unsigned int j=0;j<rozmiar;j++) 
        {
            stan=!stan;
            cout<<stan;
        }
        if (rozmiar%2==0) {
            stan=!stan;
        }
        cout<<"\n";
    }
    return 0;
}