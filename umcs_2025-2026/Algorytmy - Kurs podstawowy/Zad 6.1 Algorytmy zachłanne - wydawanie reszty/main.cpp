#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int liczba;
    cin>>liczba;
    int nominaly[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    for(int n : nominaly) {
        while(liczba>=n) {
            liczba -=n;
            cout<<n<<" ";
        }
    }
    return 0;
}
