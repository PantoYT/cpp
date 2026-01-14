#include <iostream>
#include <algorithm>
using namespace std;
struct {
    float x1,y1,x2,y2;
} prost1,prost2,obswspol;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin>>prost1.x1>>prost1.y1>>prost1.x2>>prost1.y2;
    cin>>prost2.x1>>prost2.y1>>prost2.x2>>prost2.y2;

    obswspol.x1=max(prost1.x1,prost2.x1);
    obswspol.y1=max(prost1.y1,prost2.y1);
    obswspol.x2=min(prost1.x2,prost2.x2);
    obswspol.y2=min(prost1.y2,prost2.y2);

    if (obswspol.x1 >= obswspol.x2 || obswspol.y1 >= obswspol.y2) {
        cout<<0;
    } else {
        cout<<obswspol.x1<<" "<<obswspol.y1<<" "
        <<obswspol.x2<<" "<<obswspol.y2<<"\n";
    }
    return 0;
}
