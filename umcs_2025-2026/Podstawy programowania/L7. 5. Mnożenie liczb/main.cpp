#include <iostream>
using namespace std;
void multiply_arr(int tablica[], int d, unsigned int a)
{
    for (int i=0;i<d;i++) {
        tablica[i]*=a;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tablica[4]={2, 3, 7, 5};
    multiply_arr(tablica, 4, 5);
    return 0;
}
