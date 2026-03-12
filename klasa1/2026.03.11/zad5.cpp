#include <iostream>
using namespace std;

int main() 
{
    int n,a,suma=0;
    cin>>n;
    while (n>0)
    {
        cin>>a;
        suma+=a;
        n-=1;
    }
    cout<<suma;
}