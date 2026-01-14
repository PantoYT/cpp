// Czas rozpoczêcia 20:39 18/11/25
// Czas prawdziwego zakoñczenia 22:11 18/11/25
#include <iostream>
using namespace std;

// Nibylista
struct nibylista{
    int element;
    nibylista* next;
    nibylista* prev;
};
nibylista* head = nullptr;
nibylista* tail = nullptr;
int rozmiar = 0;

// Operacje
void odczytpierwszego()
{
    if (head==nullptr) {
        cout<<"PUSTA\n";
        return;
    } else {
        cout<<(head->element)<<"\n";
    }
}

void odczytostatniego()
{
    if (!tail) {
        cout<<"PUSTA\n";
    } else {
        cout<<tail->element<<"\n";
    }
}

void liczbaelementow()
{
    cout<<rozmiar<<"\n";
}

void nowypoczatek()
{
    int liczba;
    cin>>liczba;

    nibylista* nowy = new nibylista;
    nowy->element = liczba;
    nowy->next = head;
    nowy->prev = nullptr;

    if(head) head->prev = nowy;
    head = nowy;

    if(!tail) tail = nowy;
    rozmiar++;
}

void nowykoniec()
{
    int liczba;
    cin>>liczba;

    nibylista* nowy = new nibylista;
    nowy->element = liczba;
    nowy->next = nullptr;
    nowy->prev = tail;

    if(tail) tail->next = nowy;
    tail = nowy;

    if(!head) head = nowy;
    rozmiar++;
}

void delpierwszy()
{
    if (head==nullptr) {
        cout<<"PUSTA\n";
        return;
    }
    nibylista* stary = head;
    head = head->next;
    if(head) head->prev = nullptr;
    else tail = nullptr;
    delete stary;
    rozmiar--;
}

void delostatni()
{
    if(!tail){
        cout<<"PUSTA\n";
        return;
    }
    nibylista* stary = tail;
    tail = tail->prev;
    if(tail) tail->next = nullptr;
    else head = nullptr;
    delete stary;
    rozmiar--;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int n;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        int operacja;
        cin>>operacja;
        switch(operacja) {
            case 1: odczytpierwszego(); break;
            case 2: odczytostatniego(); break;
            case 3: liczbaelementow(); break;
            case 4: nowypoczatek(); break;
            case 5: nowykoniec(); break;
            case 6: delpierwszy(); break;
            case 7: delostatni(); break;
        }
    }
    return 0;
}
