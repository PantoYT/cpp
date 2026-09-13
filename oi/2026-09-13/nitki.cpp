#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // czemu '' to nie to samo co "", głupie
    vector<string> nitki = {"kot","pies","żaba"};
    int i = 0;
    while (i<nitki.size())
    {
        cout<<nitki[i]<<"\n";
        i++;
    }
    cout<<nitki.size();
}
