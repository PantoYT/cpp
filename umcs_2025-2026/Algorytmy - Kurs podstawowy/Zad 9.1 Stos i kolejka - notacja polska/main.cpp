#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string input;
    getline(cin, input);
    istringstream iss(input);
    string token;
    stack<int> s;
    while (iss>>token) {
        if (token=="#") break;
        if (token=="+" || token=="-" ||
             token=="*" || token=="/") {
            int b=s.top(); s.pop();
            int a=s.top(); s.pop();
            if (token=="+") s.push(a + b);
            else if (token == "-") s.push(a - b);
            else if (token == "*") s.push(a * b);
            else if (token == "/") s.push(a / b);
        } else {
            s.push(stoi(token));
        }
    }
    cout<<s.top();
}
