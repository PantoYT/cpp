#include <iostream>
using namespace std;
int main()
{
    int a,b,c,najmniejsza;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>c;
    najmniejsza = a;
    if (najmniejsza > b)
    {
        najmniejsza = b;
    }
    if (najmniejsza > c)
    {
        najmniejsza = c;
    }
    cout<<najmniejsza<<"\n";
    return 0;
}
