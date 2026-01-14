#include <iostream>
using namespace std;
int main()
{
    int liczba1,liczba2;
    float liczba3;
    
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin>>liczba1;
    cin>>liczba2;
    cin>>liczba3;

    cout<<"Ile masz lat?\n";
    cout<<"Masz "<<liczba1<<" lat.\n";

    cout<<"Jaki masz wzrost?\n";
    cout<<"Masz "<<liczba2<<" cm.\n";

    cout<<"Jaka jest Twoja waga?\n";
    cout<<"Twoja waga to "<<liczba3<<" kg.\n";

    return 0;
}
