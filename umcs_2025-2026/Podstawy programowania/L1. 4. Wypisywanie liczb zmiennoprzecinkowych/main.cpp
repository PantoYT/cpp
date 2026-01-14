#include <iostream>
using namespace std;
int main()
{
    float liczba1;
    int liczba2;
    double liczba3;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin>>liczba1>>liczba2>>liczba3;
    cout<<liczba1<<":"<<liczba2<<":"<<liczba3;
    return 0;
}
