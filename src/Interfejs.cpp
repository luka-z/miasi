#include "../inc/Interface.h"
//#include "../inc/Baza_danych.h"
//#include "../inc/Jezyk.h"
//#include "../inc/Jezyk_naturalny.h"
#include "../inc/Jezyk_sztuczny.h"
//#include "../inc/Jezyk_martwy.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



void Interface::interface_glowny()
{
    char wybor = '0';
    //clrscr();
    cout << "Witam w programie zaliczeniowym z przedmiotu MIASI" <<endl;
    cout << "Autorka: Aleksandra Zbrzezniak" << endl;
    cout << "Wybierz jedna z opcji i nacisnij ENTER" << endl;
    cout << "a) Utworzenie lub podglad instancji klasy Jezyk_sztuczny" << endl;

    cout << "x) Zamknij program" << endl;
    cout << "z) Demonstracja dzialania funkcji wirtualnej \"pokaz_zawartosc\"" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 'a':
            {
                jezyk_sztuczny_interface();
            }
            break;
        case 'x':
            {
                exit(0);
            }
            break;
        case 'z':
            {
                //pokaz_zawartosc_wszystkich_obiektow();
            }
            break;
        default:
            {
                cout << "Wybierz jedną litere i nacisnij ENTER" << cout;
                interface_glowny();
            }
            break;
    }

}

void Interface::Interface::jezyk_sztuczny_interface_tworzenie()
{
    cout << "Podaj nazwe instancji i nacisnij ENTER" << endl;
    string nazwa = "";
    cin >> nazwa;
    string jezykotworca = "";
    cout << "Podaj jezykotwórce i nacisnij ENTER" << endl;
    cin  >> jezykotworca;
    cout << "Podaj cel utworzenia wybierz z ponirzszej listy i nacisnikj ENTER" << endl;
    cout << " 1) sztuka" << endl << "2) komunikacja" << endl << "3) szyfrowanie wiadmomsci" << endl;
    int cel = 0;
    cin >> cel;
    cout << "Podaj jezyk wzorcowy i nacisnij ENTER" << endl;
    string jezyk_wzorcowy = "";
    cin >> jezyk_wzorcowy;
    cout << "Czy jest w urzyciu? 0)Tak 1)Nie" << endl;
    bool jest_w_uzyciu;
    cin >> jest_w_uzyciu;

    //Jezyk_sztuczny* tmp = new Jezyk_sztuczny(jezykotworca, static_cast<Jezyk_sztuczny::Cel_utworzenia>(cel), jezyk_wzorcowy,jest_w_uzyciu);
    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
    interface_glowny();
}

void Interface::jezyk_sztuczny_interface()
{
    //clrscr();
    char wybor = '0';
    cout << "Co chcesz zrobić?" << "Wybierz litere i nacisnij ENTER" << endl;
    cout << "a) Utworz instancjie klasy wraz ze wszystkimi jej atrybutami" << endl;
    cout << "b) Wyswietl instancje" << endl;
    cout << "x) Powrot" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 'a':
            {
                jezyk_martwy_interface_tworzenie();
            }
            break;
        case 'x':
            {
                exit(0);
            }
            break;
        case 'b':
            {
                //pokaz_zawartosc_wszystkich_obiektow();
            }
            break;
        default:
            {
                cout << "Wybierz jedną litere i nacisnij ENTER" << cout;
                jezyk_martwy_interface();
            }
            break;
    }

}



*/
