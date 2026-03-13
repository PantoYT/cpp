#include <iostream>
using namespace std;

int main() 
{
    int a[5];
    for (int i = 0;i<5;i++) {
        int n;
        cin>>n;
        a[i] = n;
    }
    for (int i = 4;i>-1;i--) {
        cout<<a[i]<<" ";
    }

}