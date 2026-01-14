#include <iostream>
using namespace std;
struct {
    int h;
    int m;
} czas1,czas2;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int h,m;
    cin>>czas1.h>>czas1.m;
    cin>>czas2.h>>czas2.m;

    h=czas1.h+czas2.h;
    m=czas1.m+czas2.m;

    if (m >= 60) {
        m-=60;
        h+=1;
    }
    if (h >= 24) h-=24;
    cout<<h<<" "<<m<<"\n";
    return 0;
}
