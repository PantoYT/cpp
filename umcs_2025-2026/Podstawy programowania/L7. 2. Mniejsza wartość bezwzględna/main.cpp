#include <iostream>
#include <cmath>
using namespace std;
float absolute_min(float a,float b)
{
    if (a<b) {
        return fabs(a);
    } else {
        return fabs(b);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    float a,b;
    cin>>a>>b;
    absolute_min(a,b);
    return 0;
}
