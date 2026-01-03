#include <iostream>
#include <string>
using namespace std;
int glod=0,szczenscie=100,energia=100;
bool stan=true;
string funkcja;
void menu()
{
    cout<<"Lista komend \n nakarm \n zabawa \n "<<
    "odpoczynek \n menu \n czekaj \n wyjdz \n";
}
void nakarm()
{
    glod -= 20;
    energia -= 5 ;
}
void zabawa()
{
    szczenscie += 15;
    energia -= 5;
}
void odpoczynek()
{
    energia += 20;
}
void pokazStan()
{
    cout<<"Stan zwierzaka\n Poziom glodu to: "<<glod<<
    "\n Szczenscie wynosi: "<<szczenscie<<
    "\n Poziom energii to: "<<energia<<"\n";
}
bool sprawdzCzyZyje()
{
    if (glod >= 100 || szczenscie <= 0) {
        return false;
    } else {
        return true;
    }
}
void update()
{
    glod+=4;
    szczenscie-=5;
    energia-=3;
}
int main()
{
    cout<<"By zobaczyc komendy wpisz 'menu'\n";
    // Main loop
    while (sprawdzCzyZyje()==true)
    {
        // Update stanu
        if (glod<0) glod=0;
        if (szczenscie>100) szczenscie=100;
        if (energia>100) energia=100;
        if (stan==true) pokazStan();
        stan=true;

        // Fukncjonatoinator
        cout<<"Podaj funkcje\n";
        cin>>funkcja;
        if (funkcja == "nakarm") {
            nakarm();
            update();
        } else if (funkcja == "zabawa") {
            zabawa();
            update();
        } else if (funkcja == "odpoczynek") {
            odpoczynek();
            update();
        } else if (funkcja == "stan") {
            pokazStan();
            update();
        } else if (funkcja == "menu") {
            menu();
        } else if (funkcja == "czekaj") {
            update();
        } else if (funkcja == "wyjdz") {
            return 0;
        } else {
            cout<<"Podana funkcja nie istnieje, sprobuj ponownie, by zobaczyc liste komend wpisz menu. \n";
            stan=false;
        }
    }
    // Zgon
    cout<<"Twoj zwierzak nie przezyl... \n";
    return 0;
}
