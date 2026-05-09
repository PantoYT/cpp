#include <iostream>

using namespace std;

int main() {
    float x;

    cout << "Podaj liczbe rzeczywista: ";
    cin >> x;
    if (x > 0) {
        cout << "Liczba jest dodatnia. Pole: "<<x*x<<endl;
    } else if (x < 0) {
        cout << "Wartość bezwzględna "<<(-1)*x<<endl;
    } else {
        cout << "Równa zero" <<endl;
    }
    return 0;
}