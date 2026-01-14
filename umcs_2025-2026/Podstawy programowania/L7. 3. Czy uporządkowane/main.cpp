#include <iostream>
using namespace std;
bool is_ordered(unsigned int table[],int n)
{
    int liczba=table[0];
    for (int i=1;i<n;i++) {
        if (liczba<=table[i]) {
            liczba=table[i];
        } else {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    unsigned int table[5] = {1, 3, 2, 7, 8};
    is_ordered(table, 5);
    return 0;
}
