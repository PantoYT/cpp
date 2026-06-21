#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    bool stan = false;
    for (int i=0;i<n;i++)
    {
        if (stan==false) 
        {
            for (int j=0;j<m;j++)
            {
                cout<<'A';
            }
        } else {
            for (int j=0;j<m;j++)
            {
                cout<<'B';
            }
        }
        stan=!stan;
        cout<<"\n";
    }
    return 0;
}