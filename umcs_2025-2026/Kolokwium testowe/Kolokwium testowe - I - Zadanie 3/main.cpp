#include <iostream>
using namespace std;
char stack[10000000];
int top = -1;
void push(char znak) {
    if (top < 10000000 - 1) {
        top++;
        stack[top] = znak;
    }
}
char fst() {
    if (top >= 0) return stack[top];
    return '\0';
}
void del() {
    if (top >= 0) top--;
}
char opposite(char c) {
    if (c == ')') return '(';
    if (c == ']') return '[';
    if (c == '}') return '{';
    return '\0';
}
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string eksp;
        getline(cin, eksp);
        top = -1;
        bool ok = true;
        for (int j = 0; j < eksp.length(); j++) {
            char znak = eksp[j];
            if (znak == '(' || znak == '[' || znak == '{') {
                push(znak);
            } else if (znak == ')' || znak == ']' || znak == '}') {
                if (top == -1 || fst() != opposite(znak)) {
                    cout << "NIE\n";
                    ok = false;
                    break;
                } else {
                    del();
                }
            } else if (znak == '.') {
                break;
            }
        }
        if (ok) {
            if (top == -1) cout << "TAK\n";
            else cout << "NIE\n";
        }
    }
    return 0;
}
