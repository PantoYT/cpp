#include <iostream>
using namespace std;

void jakiZnak(int n)
{
    if (n>0) {
        cout<<"liczba n większa od zera";
    } else if (n==0) {
        cout<<"liczba n równa zero";
    } else {
        cout<<"liczba n mniejsza od zera";
    }
}

int main()
{
    int n;
    cout<<"Podaj liczbe n \n";
    cin>>n;
    jakiZnak(n);
    return 0;
}