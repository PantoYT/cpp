#include <iostream>
using namespace std;
void swap_print(unsigned int table[], int d, int a, int b)
{
    swap (table[a],table[b]);
    for (int i=0;i<d;i++) {
        cout<<table[i]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    unsigned int table[6]={0, 1, 2, 3, 4, 5};
    swap_print(table, 6, 2, 5);
    return 0;
}
