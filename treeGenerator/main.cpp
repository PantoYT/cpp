#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int blanks=rows-1;
    int stars=1;
    for (int i=0;i<rows;i++) {
        for (int j=blanks;j>0;j--) {
            cout<<" ";
        }
        for (int k=0;k<stars;k++) {
            cout<<"*";
        }
        cout<<"\n";
        blanks--;
        stars+=2;
    }
    for (int i=0;i<rows-1;i++) {
        cout<<" ";
    }
    cout<<"*\n";
    return 0;
}
