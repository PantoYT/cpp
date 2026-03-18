#include <iostream>
using namespace std;
int main()
{
    int A,B;
    float x;
    cout<<"Podaj A, B, i x\n";
    cin>>A>>B>>x;
    float wynik;
    wynik=B/(A/x);
    cout<<"Dla "<<B<<" osób potrzeba "<<wynik<<"\n";
    return 0;
}
