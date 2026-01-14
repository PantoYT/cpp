#include <iostream>
using namespace std;
int main()
{
    unsigned short liczba;
    int n = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>liczba;
    while(liczba>=10){
        n=n+1;
        liczba/=10;
    }
    cout<<n<<"\n";
    return 0;
}
