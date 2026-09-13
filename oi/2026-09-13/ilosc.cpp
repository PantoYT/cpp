#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ujemne, dodatnie, zera;
    ujemne = dodatnie = zera = 0;
    cin>>n;
    vector<int> lista(n);

    for (int &element : lista) {
        cin>>element;
        if (element>0) {
            dodatnie++;
        } else if (element<0) {
            ujemne++;
        } else {
            zera++;
        }
    }

    cout<<dodatnie<<" ";
    cout<<zera<<" ";
    cout<<ujemne<<"\n";

    return 0;
}
