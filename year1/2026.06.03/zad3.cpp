#include <iostream>
using namespace std;

bool czytrojkat()
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
        return true;
    } else {
        return false;
    }
}

int main()
{
    unsigned int n;
    cout<<"Ile trojkatow? ";
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<boolalpha<<czytrojkat()<<"\n";
    }
    return 0;
}