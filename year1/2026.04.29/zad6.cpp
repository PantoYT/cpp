#include <iostream>

using namespace std;

int main()
{
    int v,s,t;
    cin>>s>>t;
    v=s/t;
    if (v>90) {
        cout<<"za szybko\n";
    } else if (v=90) {
        cout<<"w sam raz\n";
    } else {
        cout<<"za wolno\n";
    }
    return 0;
}