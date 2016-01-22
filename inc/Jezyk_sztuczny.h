#ifndef Jezyk_sztuczny_h
#define Jezyk_sztuczny_h

#include "Jezyk_naturalny.h"
#include <string>


class Jezyk_sztuczny: public Jezyk_naturalny
{
    public:
        enum Cel_utworzenia {sztuka, komunikacja, szyfrowanie_wiadomosci};

    private:
        //atrybuty:
        std::string jezykotworca;
        enum Cel_utworzenia cel_utworzenia;
        std::string jezyk_wzorcowy;
        bool jest_w_uzyciu;

    public:
        //metody:
        void podaj_jezykotworce(std::string jezykotworca);
        void podaj_cel_utworzenia(enum Cel_utworzenia cel_utworzenia);
        void podaj_jezyk_wzorcowy (std::string jezyk_wzorcowy);
        void ustaw_jest_w_uzyciu (bool jest_w_uzyciu);
        virtual void pokaz_zawartosc();

        Jezyk_sztuczny(

                       Poziom_trudnosci _poziom_trudnosci,
                       Poziom_zaawansowania _poziom_zaawansowania,
                       std::string _nauczyciel,
                       float _lat_nauki,
                       std::string* _zasady_skladni,

                       std::string* _lista_czasow_gramatycznych,
                       bool _posiada_rodzajniki,
                       std::string* _kraje_uzywania,
                       Slownik _slownik,
                       std::string* _zasady_gramatyczne,
                       std::string* _zasady_wymowy,

                       std::string _jezykotworca,
                       Cel_utworzenia _cel_utworzenia,
                       std::string _jezyk_wzorcowy,
                       bool _jest_w_uzyciu);


};

#endif
