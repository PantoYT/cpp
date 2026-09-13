#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,suma=0;
    cin>>n;
    vector<int> liczby;
    int licznik = n;
    while (licznik!=0)
    {
        int x;
        cin>>x;
        suma+=x;
        liczby.push_back(x);
        licznik--;
    }
    cout<<suma<<"\n";
    licznik = n-1;
    while (licznik!=-1)
    {
        cout<<liczby[licznik]<<"\n";
        licznik--;
    }
}
