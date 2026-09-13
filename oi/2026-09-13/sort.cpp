#include <iostream>

using namespace std;

int main()
{
    int n,f,max,index=0;
    cin>>n>>f;
    max=f;
    for(int i=1;i!=n;i++) {
        int x;
        cin>>x;
        if (x>max) {
            max = x;
            index = i;
        }
    }
    cout<<max<<" "<<index<<"\n";
}
