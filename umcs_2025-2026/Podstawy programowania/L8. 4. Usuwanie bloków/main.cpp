#include <iostream>
using namespace std;
int ways_to_remove(int n)
{
    if (n==0) return 1;
    if (n < 0) return 0;
    return ways_to_remove(n-1)+ways_to_remove(n-3);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ways_to_remove(5);
    return 0;
}
