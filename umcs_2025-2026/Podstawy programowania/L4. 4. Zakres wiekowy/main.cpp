#include <iostream>
using namespace std;
int main()
{
    int wiek;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>wiek;
    if (wiek<13) {
        cout<<"dziecko\n";
    } else if (wiek<=19) {
        cout<<"nastolatek\n";
    } else if (wiek<=65) {
        cout<<"dorosly\n";
    } else {
        cout<<"senior\n";
    }
    return 0;
}
