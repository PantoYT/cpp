#include <iostream>
#include <vector>

using namespace std;

int search(const vector<int>& liczby,int szukana) {
    int lefo,prafo,mid;
    bool znaleziona = false;
    lefo=0;
    prafo=liczby.size()-1;
    while (lefo<=prafo) {
        mid=lefo + (prafo - lefo + 1) / 2;
        if (liczby[mid]>szukana) {
            prafo=mid-1;
        } else if (liczby[mid]<szukana) {
            lefo=mid+1;
        } else if (liczby[mid]==szukana) {
            znaleziona = true;
            return mid;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int> liczby(n);
    for(int& i : liczby) {
        cin>>i;
    }
    int szukana;
    cin>>szukana;
    cout<<search(liczby,szukana)<<"\n";
}