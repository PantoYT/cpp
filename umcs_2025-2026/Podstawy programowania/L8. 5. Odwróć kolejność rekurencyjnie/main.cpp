#include <iostream>
using namespace std;
void reverse(int n)
{
    if(n==0) return;
    int x;
    cin>>x;
    reverse(n-1);
    cout<<x<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    reverse(5);
    return 0;
}
