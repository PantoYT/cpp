#include <iostream>
using namespace std;
int main()
{
    int a,b;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b;
    if (b<a){
        swap(a,b);
    }
    for (int i=a;i<=b;i++)
        cout<<i<<" ";
    return 0;
}
