//autor: Aleksandra Zbrzeźniak
//nr albumu: 29781
//rok I, sem.I, rok akademicki 2015/2016
//informatyka IIst. w trybie e-learning

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Uzytkownik
{
    private:
        //atrybuty:
        string imie_nazwisko;
        int wiek;
        string znane_jezyki[];
        string opis;

    //metody:
        void utworz_profil();
        void zmien_profil();
        void pokaz_profil();
        void wyslij_wiadomosc();
        void czytaj_wiadomosc();
        void polacz_komunikatorem();
};

class Administrator: public Uzytkownik
{
    public:
        //metody:
        void moderuj_czat();
        void akceptuj_uzytkownika(string imie_nazwisko);
        void usun_uzytkownika(string imie_nazwisko);
        void aktualizuj_baze_danych();
        void aktualizuj_serwis();
};

class Baza_danych
{
    public:

        //metody:
        virtual void pokaz_zawartosc() = 0;

        Baza_danych();
};


class Jezyk: public Baza_danych
{
    private:

        //atrybuty:
        enum Poziom_trudnosci {latwy, srednio_trudny, trudny} poziom_trudnosci;
        enum Poziom_zaawansowania {poczatkujacy, sredniozaawansowany, zaawansowany, biegly} poziom_zaawasowania;
        string nauczyciel;
        float lat_nauki;
        string zasady_skladni[];

    public:

        //metody:
        virtual void pokaz_zawartosc();
        void aktualizuj_zawartosc();
        void dodaj_zasade_skladni (string nazwa_zasady);
        void ustaw_poziom_trudnosci (enum Poziom_trudnosci poziom_trudnosci);
        void ustaw_poziom_zaawansowania (enum Poziom_zaawansowania poziom_zaawansowania);
        void dodaj_nauczyciela (string imie_nazwisko);
        void podaj_lat_nauki (float lat_nauki);

    Jezyk();

};


class Slownik
{
    private:

        //atrybuty:
        map<string, string> slownik;

    public:

        //metody:
        void dodaj_wpis(string wpis_w_jezyku1, string wpis_w_jezyku2);
        void pokaz_wpis(string wpis);
        void aktualizuj_wpis (string wpis_w_jezyku1, string wpis_w_jezyku2);

};


class Jezyk_martwy: public Jezyk
{
    private:

        //atrybuty:
        bool udokumentowane_zasady_wymowy;
        bool unikalne_pismo;
        bool posiada_slownik;
        Slownik slownik;
        string zasady_wymowy[];

    public:

        void ustaw_udokumentowane_zasady_wymowy (bool udokumentowane_zasady_wymowy);
        void ustaw_unikalne_pismo (bool unikalne_pismo);
        void ustaw_posiada_slownik (bool posiada_slownik);
        void dodaj_zasade_wymowy (string nazwa_zasady);
        virtual void pokaz_zawartosc();

};


class Jezyk_naturalny: public Jezyk
{
    private:

        //atrybuty:
        string lista_czasow_gramatycznych[];
        bool posiada_rodzajniki;
        string kraje_uzywania[];
        Slownik slownik;
        string zasady_gramatyczne[];
        string zasady_wymowy[];

    public:

        //metody:
        void dodaj_czas (string nazwa_czasu);
        void ustaw_posiada_rodzajniki (bool posiada_rodzajniki);
        void dodaj_kraj_uzywania (string kraj);
        void dodaj_zasade_gram (string nazwa_zasady);
        void dodaj_zasade_wymowy (string nazwa_zasady);
        string przetlumacz (string tekst_wejsciowy);
        virtual void pokaz_zawartosc();

    Jezyk_naturalny();

};


class Jezyk_programowania: public Jezyk
{
    private:

        //atrybuty:
        bool jest_obiektowy;
        bool posiada_skladnie_klamrowa;
        string znane_biblioteki[];
        string znane_algorytmy[];

    public:

        //metody:
        void dodaj_znajomosc_biblioteki (string nazwa_biblioteki);
        void dodaj_znajomosc_algorytmu (string nazwa_konstrukcji_algorytmu);
        char* zamien_kod_na_obiektowy (char *kod);
        virtual void pokaz_zawartosc();

};


class Kompilowany
{
     private:

         //atrybuty:
         string kompilator;
         bool posiada_funkcje_niskopoziomowe;
         Jezyk_programowania jezyk_programowania;

     public:

         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_kompilator(string kompilator);
         void ustaw_posiada_funkcje_niskopoziomowe (bool posiada_funkcje_niskopoziomowe);

};


class Interpretowany
{
     private:

         //atrybuty:
         string interpreter;
         bool kontrola_typow;
         Jezyk_programowania jezyk_programowania;

     public:

         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_interpretej (string interpreter);
         void ustaw_kontrola_typow (bool kontrola_typow);

};


class Jezyk_migowy: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string jezyk_wzorcowy;
        bool alfabet_jednoreczny;

    public:

        //metody:
        void podaj_jezyk_wzorcowy(string jezyk_wzorcowy);
        void ustaw_alfabet_jednoreczny (bool alfabet_jednoreczny);
        virtual void pokaz_zawartosc();

};


class Jezyk_sztuczny: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string jezykotworca;
        string jezyk_wzorcowy;
        bool jest_w_uzyciu;

    public:

        enum Cel_utworzenia {sztuka, komunikacja, szyfrowanie_wiadomosci} cel_utworzenia;
        //metody:
        void podaj_jezykotworce(string jezykotworca);
        void podaj_cel_utworzenia(enum Cel_utworzenia cel_utworzenia);
        void podaj_jezyk_wzorcowy (string jezyk_wzorcowy);
        void ustaw_jest_w_uzyciu (bool jest_w_uzyciu);
        virtual void pokaz_zawartosc();

    Jezyk_sztuczny(string _jezykotworca, Cel_utworzenia _cel_utworzenia,
            string _jezyk_wzorcowy, bool _jest_w_uzyciu);

};


class Germanskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string przypadki[];
        char znaki_niestandardowe[];

    public:

        //metody:
        void dodaj_znak_niestandardowy (char z);
        void dodaj_przypadek (string przypadek);
        virtual void pokaz_zawartosc();

};


class Slowianskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string alfabet[];
        string przypadki[];

    public:

        //metody:
        void dodaj_alfabet (string alfabet);
        void dodaj_przypadek(string przypadek);
        virtual void pokaz_zawartosc();

};


class Romanskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        bool liaison;
        char znaki_niestandardowe[];

    public:

        //metody:
        void ustaw_liaison(bool liaison);
        void dodaj_znak_niestandardowy (char z);
        virtual void pokaz_zawartosc();

};


class IIIciej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_wskazniki;

    public:

        //metody:
        void ustaw_posiada_wskazniki (bool posiada_wskazniki);
        virtual void pokaz_zawartosc();

};


class IVtej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_klasy;

    public:

        //metody:
        void ustaw_posiada_klasy(bool posiada_klasy);
        virtual void pokaz_zawartosc();

};

class Element_list_klas
{
     public:
        Baza_danych* wskaznik_na_obiekt;
        string nazwa_klasy;
};

class Interface
{
    private:
        vector <Element_list_klas> lista_klas;
    public:
        void interface_glowny();
        void jezyk_martwy_interface();
        void jezyk_martwy_interface_tworzenie();
        //void pokaz_zawartosc_wszystkich_obiektow();
        Element_list_klas znajdz_instancje();


};

