#include <iostream>
using namespace std;

int abs(int n)  
{
    if (n>=0) {
        return n;
    } else {
        return -n;
    }
}

int main()
{
    int n,absn;
    cin>>n;
    absn=abs(n);
    cout<<"Wartość bezwzględna z  "<< n <<" to: "<< absn;
    return 0;
}