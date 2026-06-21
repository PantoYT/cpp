#include <iostream>
using namespace std;

int main()
{
    int n=0,liczba=0,psum=0,msum=0;
    cin>>n;
    while(n)
    {
        cin>>liczba;
        if (liczba==0) {
            
        } else if (liczba>0) {
            psum++;
        } else {
            msum++;
        }
        n--;
    }
    cout<<"Ile plus: "<<psum<<"\nIle minus: "<<msum;
    return 0;
}