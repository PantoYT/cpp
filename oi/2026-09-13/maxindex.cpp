#include <iostream>
#include <vector>

int indeksMaksimum(const std::vector<int>& liczby) {
    int n = liczby.size();
    int max = 0;
    for (int i = 1;i<n;i++) {
        if (liczby[i]>liczby[max]) {
            max = i;
        }
    }
    return max;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::cin>>n;
    std::vector<int> liczby(n);
    for (int& i : liczby) {
        std::cin>>i;
    }
    std::cout<<indeksMaksimum(liczby)<<"\n";
    return 0;
}