#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

int main() {

    // ============ TXT ============

    cout << "=== Czytanie TXT ===" << endl;

    // cały plik naraz
    ifstream plik("dane.txt");
    string zawartosc((istreambuf_iterator<char>(plik)), istreambuf_iterator<char>());
    plik.close();
    cout << zawartosc << endl;

    // linia po linii
    ifstream plik2("dane.txt");
    string linia;
    while (getline(plik2, linia)) {
        cout << linia << endl;
    }
    plik2.close();

    // schemat maturalny
    ifstream plik3("dane.txt");
    int n;
    plik3 >> n;
    vector<int> dane(n);
    for (int i = 0; i < n; i++) {
        plik3 >> dane[i];
    }
    plik3.close();

    int wynik = 0;
    for (int x : dane) wynik += x;
    cout << "Suma: " << wynik << endl;

    // pisanie
    cout << "\n=== Pisanie TXT ===" << endl;

    ofstream zapis("wynik.txt");
    zapis << wynik << endl;
    zapis.close();

    // dopisywanie
    ofstream dopis("wynik.txt", ios::app);
    dopis << "Nowa linia" << endl;
    dopis.close();

    // ============ JSON ============

    cout << "\n=== Czytanie JSON ===" << endl;

    ifstream plikJson("dane.json");
    json data;
    plikJson >> data;
    plikJson.close();

    cout << "Klasa: " << data["klasa"] << endl;
    cout << "Pierwszy uczen: " << data["uczniowie"][0]["imie"] << endl;

    for (auto& uczen : data["uczniowie"]) {
        int suma = 0;
        for (int ocena : uczen["oceny"]) suma += ocena;
        double srednia = (double)suma / uczen["oceny"].size();
        cout << uczen["imie"] << " " << uczen["nazwisko"] << ": " << srednia << endl;
    }

    cout << "\n=== Pisanie JSON ===" << endl;

    data["rok"] = 2026;
    ofstream zapiszJson("wynik.json");
    zapiszJson << data.dump(4) << endl;
    zapiszJson.close();

    cout << "Zapisano wynik.json" << endl;

    return 0;
}