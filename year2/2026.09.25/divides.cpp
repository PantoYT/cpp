#include <iostream>
using namespace std;

void dzielniki(int n)
{
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            cout<<i<<" ";
        }
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    cin>>n;
    dzielniki(n);
    return 0;
}