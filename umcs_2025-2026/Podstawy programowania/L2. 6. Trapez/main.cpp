#include <iostream>
using namespace std;
int main()
{
    float a,b,h,area;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>h;
    area=((a+b)*h)/2;
    cout<<area;
    return 0;
}
