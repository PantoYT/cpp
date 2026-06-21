#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int lista[3];

    cout<<"Podaj boki: ";
    for (int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        lista[i] = x;
    }

    for (int j = 0; j < 2; j++) 
    {
        for (int i = 0; i < 2; i++)
        {
            if (lista[i] > lista[i + 1])
            {
                swap(lista[i], lista[i+1]);
            }
        }
    }

    a=lista[0];
    b=lista[1];
    c=lista[2];

    if ((a*a)+(b*b)==(c*c)) {
        cout<<"tak"<<"\n";
    } else {
        cout<<"nie"<<"\n";
    }
    return 0;
}
