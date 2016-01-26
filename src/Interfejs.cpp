#include "../inc/Interface.h"
//#include "../inc/Baza_danych.h"
//#include "../inc/Jezyk.h"
//#include "../inc/Jezyk_naturalny.h"
#include "../inc/Jezyk_sztuczny.h"
#include "../inc/Jezyk_migowy.h"
#include "../inc/Jezyk_martwy.h"
#include "../inc/Slowianskie.h"
#include "../inc/Romanskie.h"
#include "../inc/IIIciej_generacji.h"
#include "../inc/IVtej_generacji.h"

#include <typeinfo>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

string Interface::pobierz_str(string co_pobrac, string wartosc_domyslna)
{
    cout << co_pobrac << "i naciśnij ENTER ["<< wartosc_domyslna << "]:" <<endl;
    cin.ignore();
    string pobrano = "";
    getline(cin,pobrano);
    
    if(pobrano.empty())
    {
      return wartosc_domyslna;
    }
    return pobrano;
}

int Interface::pobierz_int(string co_pobrac, int wartosc_domyslna)
{
    cout << co_pobrac << "i naciśnij ENTER ["<< wartosc_domyslna << "]:" <<endl;
    string pobrano;
    cin.ignore();
    getline(cin, pobrano);
    if(pobrano.empty())
    {
      return wartosc_domyslna;
    }
    return atoi(pobrano.c_str());
}

bool Interface::pobierz_bool(string co_pobrac, bool wartosc_domyslna)
{
    cout << co_pobrac << "i naciśnij ENTER ["<< wartosc_domyslna << "]:" <<endl;
    string pobrano;
    cin.ignore();
    getline(cin, pobrano);
    if(pobrano.empty())
    {
      return wartosc_domyslna;
    }
    return static_cast<bool>(atoi(pobrano.c_str()));
}


void Interface::czekaj()
{
  cout << "Aby kontynuować naciśnij ENTER" <<endl;
    string pobrano;
    getline(cin, pobrano);
}

#define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))
void Interface::jezyk_interface_klasa(Interface_klasa_ptr stworz, Interface_klasa_ptr wyswietl)
{

  while(1)
  {
    //clrscr();
    char wybor = '0';
    cout << "Co chcesz zrobić?"<< endl << "Wybierz litere i naciśnij ENTER" << endl;
    cout << "a) Utworz instancjie klasy wraz ze wszystkimi jej atrybutami" << endl;
    cout << "b) Wyswietl instancje" << endl;
    cout << "x) Powrót" << endl;
    cin >> wybor;
    switch(wybor)
    {
    case 'a':
      {
        CALL_MEMBER_FN((*this),stworz)();
        //(this->*stworz)();
      }
      break;
    case 'x':
      {
        return;
        //exit(0);
      }
      break;
    case 'b':
      {
        CALL_MEMBER_FN((*this),wyswietl)();
      }
      break;
    default:
      {
        cout << "Wybierz jedną litere i nacisnij ENTER" << cout;
        continue;
      }
      break;
    }
    break;
  }

}



void Interface::interface_glowny()
{
    while(1)
    {
    char wybor = '0';
    //clrscr();
    cout << "Witam w programie zaliczeniowym z przedmiotu MIASI" <<endl;
    cout << "Autorka: Aleksandra Zbrzezniak" << endl;
    cout << "Wybierz jedna z opcji i nacisnij ENTER" << endl;
    cout << "a) Utworzenie lub podglad instancji klasy Jezyk_sztuczny" << endl;
    cout << "b) Utworzenie lub podglad instancji klasy Jezyk_migowy" << endl;
    cout << "c) Utworzenie lub podglad instancji klasy Germanskie" << endl;
    cout << "d) Utworzenie lub podglad instancji klasy Jezyk_martwy" << endl;
    cout << "e) Utworzenie lub podglad instancji klasy Slowianskie" << endl;
    cout << "f) Utworzenie lub podglad instancji klasy Romanskie" << endl;
    cout << "g) Utworzenie lub podglad instancji klasy IIIciej_generacji" << endl;
    cout << "h) Utworzenie lub podglad instancji klasy IVtej_generacji" << endl;
    cout << "i) Utworzenie lub podglad instancji klasy Interpretowany" << endl;
    cout << "j) Utworzenie lub podglad instancji klasy Kompilowany" << endl;

    cout << "x) Zamknij program" << endl;
    cout << "z) Demonstracja dzialania funkcji wirtualnej \"pokaz_zawartosc\"" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 'a':
                jezyk_interface_klasa(&Interface::jezyk_sztuczny_interface_tworzenie, &Interface::jezyk_sztuczny_interface_wyswietlanie);
            break;
        case 'b':
                jezyk_interface_klasa(&Interface::jezyk_migowy_interface_tworzenie, &Interface::jezyk_migowy_interface_wyswietlanie);
            break;
        case 'c':
                jezyk_interface_klasa(&Interface::germanskie_interface_tworzenie, &Interface::germanskie_interface_wyswietlanie);
            break;
        case 'd':
                jezyk_interface_klasa(&Interface::jezyk_martwy_interface_tworzenie, &Interface::jezyk_martwy_interface_wyswietlanie);
            break;
        case 'e':
                jezyk_interface_klasa(&Interface::slowianskie_interface_tworzenie, &Interface::slowianskie_interface_tworzenie);
            break;
        case 'f':
                jezyk_interface_klasa(&Interface::romanskie_interface_tworzenie, &Interface::romanskie_interface_wyswietlanie);
            break;
        case 'g':
                jezyk_interface_klasa(&Interface::IIIciej_generacji_interface_tworzenie, &Interface::IIIciej_generacji_interface_wyswietlanie);
            break;
        case 'h':
                jezyk_interface_klasa(&Interface::IVtej_generacji_interface_tworzenie, &Interface::IVtej_generacji_interface_wyswietlanie);
            break;
        case 'i':
                jezyk_interface_klasa(&Interface::Interpretowany_interface_tworzenie, &Interface::Interpretowany_interface_wyswietlanie);
            break;
        case 'j':
                jezyk_interface_klasa(&Interface::Kompilowany_interface_tworzenie, &Interface::Kompilowany_interface_wyswietlanie);
            break;
        case 'x':
            {
                exit(0);
            }
            break;
        case 'z':
            {
                pokaz_zawartosc_wszystkich_obiektow();
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

}

void Interface::jezyk_sztuczny_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    string lista_czasow_gramatycznych =  pobierz_str("Podaj czas gramatyczną", "Pierwszy czas gramatyczny");
    bool posiada_rodzajniki = pobierz_bool("Czy jezyk posiada rodzajniki wybierz 0) NIE, 1) TAK", 0);
    string kraje_uzywania = pobierz_str( "Napisz w jakim kraju jest ten język używany", "Pierwszy kraj uzywania");

    Slownik slownik;

    string zasady_gramatyczne = pobierz_str("Podaj zasadę gramatyczną", "Pierwsza zasada gramatyczna");
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy","Pierwsza zasada wymowy");

    string jezykotworca = pobierz_str( "Podaj jezykotwórce","Domyslny jezykotwórca");
    Jezyk_sztuczny::Cel_utworzenia cel_utworzenia = static_cast<Jezyk_sztuczny::Cel_utworzenia>(pobierz_int("Podaj cel utworzenia \n 0)sztuka, 1)komunikacja 2)szyfrowanie wiadmomści", 1 ));
    string jezyk_wzorcowy = pobierz_str("Podaj język wzorcowy","Język wzorcowy");
    bool jest_w_uzyciu = pobierz_bool("Czy jest w urzyciu? 0)Tak 1)Nie", true);

    Jezyk_sztuczny* tmp = new Jezyk_sztuczny(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, lista_czasow_gramatycznych,
     posiada_rodzajniki, kraje_uzywania, slownik, zasady_gramatyczne, zasady_wymowy, jezykotworca, cel_utworzenia, jezyk_wzorcowy, jest_w_uzyciu);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Jezyk_sztuczny";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
    //interface_glowny();
}

void Interface::jezyk_sztuczny_interface_wyswietlanie()
{
 pokaz_instancje("Jezyk_sztuczny");
 //interface_glowny();
}

void Interface::jezyk_migowy_interface_tworzenie()
{

    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    string lista_czasow_gramatycznych =  pobierz_str("Podaj czas gramatyczną", "Pierwszy czas gramatyczny");
    bool posiada_rodzajniki = pobierz_bool("Czy jezyk posiada rodzajniki wybierz 0) NIE, 1) TAK", true);
    string kraje_uzywania = pobierz_str( "Napisz w jakim kraju jest ten język używany", "Pierwszy kraj uzywania");

    Slownik slownik;

    string zasady_gramatyczne = pobierz_str("Podaj zasadę gramatyczną", "Pierwsza zasada gramatyczna");
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy","Pierwsza zasada wymowy");



    string jezyk_wzorcowy = pobierz_str("Podaj jezyk wzorcowy", "Jezyk wzorcowy");
    bool alfabet_jednoreczny = pobierz_bool("Czy jest jednoręczny? 0)Tak 1)Nie", true);

    Jezyk_migowy* tmp = new Jezyk_migowy(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, lista_czasow_gramatycznych,
     posiada_rodzajniki, kraje_uzywania, slownik, zasady_gramatyczne, zasady_wymowy, jezyk_wzorcowy, alfabet_jednoreczny);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Jezyk_migowy";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
    //interface_glowny();
}
void Interface::jezyk_migowy_interface_wyswietlanie()
{
  pokaz_instancje("Jezyk_migowy");
 //interface_glowny();
}

void Interface::jezyk_martwy_interface_tworzenie()
{

    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    bool udokumentowane_zasady_wymowy = pobierz_bool("Czy posiada udokumentowane zasady wymowy 0) Nie 1) Tak", 1);
    bool unikalne_pismo = pobierz_bool("Czy posiada unikalne pismio? 0) Nie 1) Tak" , 1);
    bool posiada_slownik = pobierz_bool("Czy posiada słoownik? 0) Nie 1)Tak", 1);
    Slownik slownik;
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy:", "Domyślna zasada wymowy");


    Jezyk_martwy* tmp = new Jezyk_martwy(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni,
                                         udokumentowane_zasady_wymowy, unikalne_pismo, posiada_slownik, slownik, zasady_wymowy);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Jezyk_martwy";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
    //interface_glowny();
}
void Interface::jezyk_martwy_interface_wyswietlanie()
{
  pokaz_instancje("Jezyk_martwy");
 //interface_glowny();
}

void Interface::germanskie_interface_tworzenie()
{

    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    string lista_czasow_gramatycznych =  pobierz_str("Podaj czas gramatyczną", "Pierwszy czas gramatyczny");
    bool posiada_rodzajniki = pobierz_bool("Czy jezyk posiada rodzajniki wybierz 0) NIE, 1) TAK", true);
    string kraje_uzywania = pobierz_str( "Napisz w jakim kraju jest ten język używany", "Pierwszy kraj uzywania");

    Slownik slownik;

    string zasady_gramatyczne = pobierz_str("Podaj zasadę gramatyczną", "Pierwsza zasada gramatyczna");
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy","Pierwsza zasada wymowy");



    string przypadek = pobierz_str("Podaj przypadek", "Przykladowy przypadek");
    char znak_niestandardowy = pobierz_str("Podaj znak niestandardwy", "ą").c_str()[0];

    Jezyk_migowy* tmp = new Jezyk_migowy(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, lista_czasow_gramatycznych,
     posiada_rodzajniki, kraje_uzywania, slownik, zasady_gramatyczne, zasady_wymowy, przypadek, znak_niestandardowy);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Jezyk_migowy";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
 //   interface_glowny();
}
void Interface::germanskie_interface_wyswietlanie()
{
  pokaz_instancje("Jezyk_migowy");
 //interface_glowny();
}


void Interface::slowianskie_interface_tworzenie()
{

    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    string lista_czasow_gramatycznych =  pobierz_str("Podaj czas gramatyczną", "Pierwszy czas gramatyczny");
    bool posiada_rodzajniki = pobierz_bool("Czy jezyk posiada rodzajniki wybierz 0) NIE, 1) TAK", true);
    string kraje_uzywania = pobierz_str( "Napisz w jakim kraju jest ten język używany", "Pierwszy kraj uzywania");

    Slownik slownik;

    string zasady_gramatyczne = pobierz_str("Podaj zasadę gramatyczną", "Pierwsza zasada gramatyczna");
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy","Pierwsza zasada wymowy");

    string alfabet = pobierz_str("Podaj alfabet", "Przykladowy alfabet");
    string przypadki = pobierz_str("Podaj przypadek", "Przykladowy przypadek");

     Slowianskie* tmp = new Slowianskie(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, lista_czasow_gramatycznych,
     posiada_rodzajniki, kraje_uzywania, slownik, zasady_gramatyczne, zasady_wymowy, alfabet, przypadki);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Slowianskie";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
 //   interface_glowny();
}
void Interface::slowianskie_interface_wyswietlanie()
{
  pokaz_instancje("Slowianskie");
 //interface_glowny();
}

void Interface::romanskie_interface_tworzenie()
{

    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");
    string lista_czasow_gramatycznych =  pobierz_str("Podaj czas gramatyczną", "Pierwszy czas gramatyczny");
    bool posiada_rodzajniki = pobierz_bool("Czy jezyk posiada rodzajniki wybierz 0) NIE, 1) TAK", true);
    string kraje_uzywania = pobierz_str( "Napisz w jakim kraju jest ten język używany", "Pierwszy kraj uzywania");

    Slownik slownik;

    string zasady_gramatyczne = pobierz_str("Podaj zasadę gramatyczną", "Pierwsza zasada gramatyczna");
    string zasady_wymowy = pobierz_str("Podaj zasadę wymowy","Pierwsza zasada wymowy");

    bool liaison = pobierz_bool("Czy posiada liaison? 0) Nie, 1) Tak:", 1);
    char znak_niestandardowy = pobierz_str("Podaj znak niestandardwy", "ą").c_str()[0];

    Romanskie* tmp = new Romanskie(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, lista_czasow_gramatycznych,
     posiada_rodzajniki, kraje_uzywania, slownik, zasady_gramatyczne, zasady_wymowy, liaison, znak_niestandardowy);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "Romanskie";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
 //   interface_glowny();
}
void Interface::romanskie_interface_wyswietlanie()
{
  pokaz_instancje("Romanskie");
 //interface_glowny();
}


void Interface::IIIciej_generacji_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");

    bool jest_obiektowy = pobierz_bool("Czy jest obiektowy 0) Nie, 1)Tak", 0);
    bool posiada_skladnie_klamrowa = pobierz_bool("Czy posiada składnie klamrową/ 0)Nie 1)Tak)", 0);
    string znane_biblioteki = pobierz_str("Podaj znaną bibliotekę ", "Biblioteka Domyślna");
    string znane_algorytmy = pobierz_str("Podaj znane algorytmy ", "Domyslny algorytm");
    bool posiada_wskazniki = pobierz_bool("Czy posiada wskaźniki? 0) Nie 1) Tak ", 0);


    IIIciej_generacji* tmp = new IIIciej_generacji(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, 
                                                   jest_obiektowy, posiada_skladnie_klamrowa, znane_biblioteki, znane_algorytmy, posiada_wskazniki);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.typ_klasy = "IIIciej_generacji";
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas.push_back(nowy);
 //   interface_glowny();
}
void Interface::IIIciej_generacji_interface_wyswietlanie()
{
  pokaz_instancje("IIIciej_generacji");
 //interface_glowny();
}

void Interface::IVtej_generacji_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");

    bool jest_obiektowy = pobierz_bool("Czy jest obiektowy 0) Nie, 1)Tak", 0);
    bool posiada_skladnie_klamrowa = pobierz_bool("Czy posiada składnie klamrową/ 0)Nie 1)Tak)", 0);
    string znane_biblioteki = pobierz_str("Podaj znaną bibliotekę ", "Biblioteka Domyślna");
    string znane_algorytmy = pobierz_str("Podaj znane algorytmy ", "Domyslny algorytm");
    bool posiada_klasy = pobierz_bool("Czy posiada klasy? 0) Nie 1) Tak ", 0);


    IVtej_generacji* tmp = new IVtej_generacji(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, 
                                                   jest_obiektowy, posiada_skladnie_klamrowa, znane_biblioteki, znane_algorytmy, 
                                                   posiada_klasy);

    Element_list_klas nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.wskaznik_na_obiekt = tmp;
    nowy.typ_klasy = "IVtej_generacji";
    lista_klas.push_back(nowy);
 //   interface_glowny();
}
void Interface::IVtej_generacji_interface_wyswietlanie()
{
  pokaz_instancje("IVtej_generacji");
 //interface_glowny();
}



void Interface::Interpretowany_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");

    bool jest_obiektowy = pobierz_bool("Czy jest obiektowy 0) Nie, 1)Tak", 0);
    bool posiada_skladnie_klamrowa = pobierz_bool("Czy posiada składnie klamrową/ 0)Nie 1)Tak)", 0);
    string znane_biblioteki = pobierz_str("Podaj znaną bibliotekę ", "Biblioteka Domyślna");
    string znane_algorytmy = pobierz_str("Podaj znane algorytmy ", "Domyslny algorytm");
    string interpreter = pobierz_str("Podaj interpreter", "Domyślny interpreter");
    bool kontrola_typow = pobierz_bool("Czy posiada kontrolę typów 0) Nie, 1)Tak", 0);

    Interpretowany* tmp = new Interpretowany(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, 
                                                   jest_obiektowy, posiada_skladnie_klamrowa, znane_biblioteki, znane_algorytmy, 
                                                   interpreter, kontrola_typow);

    Element_list_klas_interpretowany nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas_interpretowany.push_back(nowy);
 //   interface_glowny();
}
void Interface::Interpretowany_interface_wyswietlanie()
{
}

void Interface::Kompilowany_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    Jezyk::Poziom_trudnosci poziom_trudnosci = static_cast<Jezyk::Poziom_trudnosci>(pobierz_int("Podaj poziom trudności języka \n 0)łatwy, 1)średnio trudny, 2)trudny", 1));
    Jezyk::Poziom_zaawansowania poziom_zaawansowania =  static_cast<Jezyk::Poziom_zaawansowania>(pobierz_int("Podaj poziom zaawansowania \n  0) początkujący, 1)średniozaawansowany, 2) zaawansowany, 3) biegły", 2));
    string nauczyciel = pobierz_str("Podaj jak nazywa się Nauczyciel", "Nauczyciel domyslny");
    float lat_nauki = pobierz_int("Podaj ile tat trwała nauka", 5);
    string zasady_skladni = pobierz_str("Podaj zasadę składni", "Pierwsza zasada składni");

    bool jest_obiektowy = pobierz_bool("Czy jest obiektowy 0) Nie, 1)Tak", 0);
    bool posiada_skladnie_klamrowa = pobierz_bool("Czy posiada składnie klamrową/ 0)Nie 1)Tak)", 0);
    string znane_biblioteki = pobierz_str("Podaj znaną bibliotekę ", "Biblioteka Domyślna");
    string znane_algorytmy = pobierz_str("Podaj znane algorytmy ", "Domyslny algorytm");
    string kompilator = pobierz_str("Podaj kompilator ", "Domyślny kompilator");
    bool posiada_funkcje_niskopoziomowe = pobierz_bool("Czy posiada funkcje niskopoziomowe 0) Nie, 1)Tak", 0);

    Kompilowany* tmp = new Kompilowany(poziom_trudnosci, poziom_zaawansowania, nauczyciel, lat_nauki, zasady_skladni, 
                                                   jest_obiektowy, posiada_skladnie_klamrowa, znane_biblioteki, znane_algorytmy, 
                                                   kompilator, posiada_funkcje_niskopoziomowe);

    Element_list_klas_kompilowany nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas_kompilowany.push_back(nowy);
 //   interface_glowny();
}
void Interface::Kompilowany_interface_wyswietlanie()
{
}

void Interface::Administrator_interface_tworzenie()
{
    string nazwa = pobierz_str("Podaj nazwę instancji", "Domyslna nazywa instancji");
    string imie_nazwisko = pobierz_str("Podaj imie i nazwisko", "Domyslny Administrator");
    int wiek = pobierz_int("Podaj wiek", 20);
    string znane_jezyki = pobierz_str("Podaj znane języki", "Jezyk Domyślny");
    string opis = pobierz_str("Podaj opis", "Domyślny opis");

    Administrator* tmp = new Administrator(imie_nazwisko, wiek, znane_jezyki,opis);


    Element_list_klas_admistrator nowy;
    nowy.nazwa_klasy = nazwa;
    nowy.wskaznik_na_obiekt = tmp;
    lista_klas_administrator.push_back(nowy);
 //   interface_glowny();
}
void Interface::Administrator_interface_wyswietlanie()
{
}


void Interface::pokaz_zawartosc_wszystkich_obiektow()
{
  cout << "Funkcja pokazująca zawartość wszystkich obiektów kozystając z \n funkcji virtual pokaz_zawartosc()"<<endl;
  for(unsigned int i = 0 ; i <lista_klas.size(); i++)
  {

    cout <<"Klasa = "<<typeid(lista_klas[i].wskaznik_na_obiekt).name() << " nazwa instancji = " << lista_klas[i].nazwa_klasy <<endl;
    lista_klas[i].wskaznik_na_obiekt->pokaz_zawartosc();
  }
  czekaj();
 // interface_glowny();
}

void Interface::znajdz_instancje(std::string _typ_klasy, std::vector<Element_list_klas>& lista)
{
  for(auto klasa : lista_klas)
  {
    if(klasa.typ_klasy == _typ_klasy)
      lista.push_back(klasa);
  }
}

void Interface::pokaz_instancje(std::string typ_klasy)
{

  vector<Element_list_klas> lista_znalezionych;
  znajdz_instancje(typ_klasy , lista_znalezionych);
  if(lista_znalezionych.empty())
  {
    cout << "Nie znaleziono instancji klasy "<<typ_klasy <<endl;
    czekaj();
    return;
  }

    cout<<"Znaleziono następujące instacje klasy "<<typ_klasy << ":" <<endl;
    for (unsigned int i = 0; i <lista_znalezionych.size(); i++)
    {
      cout << i << ") "<< lista_znalezionych[i].nazwa_klasy <<endl;
    }

    unsigned int do_wyswietlenia = 1000;
    do{
      do_wyswietlenia = pobierz_int("Wybierz numer instancji do wyswietlenia ", 0);
      cout << "Wybrano = " << do_wyswietlenia <<endl;
    }while(do_wyswietlenia <0 || do_wyswietlenia>lista_znalezionych.size());


    lista_znalezionych[do_wyswietlenia].wskaznik_na_obiekt->pokaz_zawartosc();
    czekaj();
}


