#include <iostream>
using namespace std;
int main() 
{
    // Liczba2 nie była zadeklarowana
    // dodawanie dwóch zamiast mnożenie razy 2
    // zła kolejność, wypisywanie przed obliczaniem
    int liczba1;
    cin>>liczba1;
    int liczba2=liczba1*2;
    cout<<liczba2;
    return 0;
}