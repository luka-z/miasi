#ifndef Jezyk_h
#define Jezyk_h
#include "Baza_danych.h"
#include <string>

class Jezyk: public Baza_danych
{
    public:
        enum Poziom_trudnosci {latwy, srednio_trudny, trudny};
        enum Poziom_zaawansowania {poczatkujacy, sredniozaawansowany, zaawansowany, biegly};

    private:
        //atrybuty:
        enum Poziom_trudnosci poziom_trudnosci;
        enum Poziom_zaawansowania poziom_zaawasowania;
        std::string nauczyciel;
        float lat_nauki;
        std::string* zasady_skladni;

    public:
        //metody:
        virtual void pokaz_zawartosc();
        void aktualizuj_zawartosc();
        void dodaj_zasade_skladni (std::string nazwa_zasady);
        void ustaw_poziom_trudnosci (enum Poziom_trudnosci poziom_trudnosci);
        void ustaw_poziom_zaawansowania (enum Poziom_zaawansowania poziom_zaawansowania);
        void dodaj_nauczyciela (std::string imie_nazwisko);
        void podaj_lat_nauki (float lat_nauki);

        Jezyk(Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string* _zasady_skladni);

};

#endif
