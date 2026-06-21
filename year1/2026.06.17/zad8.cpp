#include <iostream>
#include <numbers>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8); SetConsoleCP(CP_UTF8);
    int h=0,r=0; do { cin>>h>>r; if (h<=0 || r<=0) { cout<<"błędne dane\n"; } } while ( h <= 0 || r <= 0);
    float V = numbers::pi*r*r*h;
    cout<<V;
    return 0;
}