#ifndef Jezyk_martwy_h
#define Jezyk_martwy_h

#include "../inc/Jezyk.h"
#include "../inc/Slownik.h"
#include <string>
#include <vector>

class Jezyk_martwy: public Jezyk
{
    private:

        //atrybuty:
        bool udokumentowane_zasady_wymowy;
        bool unikalne_pismo;
        bool posiada_slownik;
        Slownik slownik;
        std::vector<std::string> zasady_wymowy;

    public:

        void ustaw_udokumentowane_zasady_wymowy (bool udokumentowane_zasady_wymowy);
        void ustaw_unikalne_pismo (bool unikalne_pismo);
        void ustaw_posiada_slownik (bool posiada_slownik);
        void dodaj_zasade_wymowy (std::string nazwa_zasady);
        virtual void pokaz_zawartosc();

        Jezyk_martwy(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _udokumentowane_zasady_wymowy,
              bool _unikalne_pismo,
              bool _posiada_slownik,
              Slownik _slownik,
              std::string _zasada_wymowy
              );
};

#endif
