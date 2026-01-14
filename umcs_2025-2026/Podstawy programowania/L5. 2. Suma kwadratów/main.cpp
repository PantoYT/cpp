#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n;
    int suma = 0;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>n;
    for (int i=0;i<=n;i++) {
        suma+=pow(i,2);
    }
    cout<<suma<<"\n";
    return 0;
}
