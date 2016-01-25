#ifndef Kompilowany_h
#define Kompilowany_h

#include <string>
#include "../inc/Jezyk_programowania.h"

class Kompilowany
{
     private:

         //atrybuty:
         std::string kompilator;
         bool posiada_funkcje_niskopoziomowe;
         Jezyk_programowania jezyk_programowania;

     public:

         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_kompilator(std::string kompilator);
         void ustaw_posiada_funkcje_niskopoziomowe (bool posiada_funkcje_niskopoziomowe);
         void pokaz_zawartosc();
         Kompilowany(
              Jezyk::Poziom_trudnosci _poziom_trudnosci,
              Jezyk::Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,
              std::string _kompilator,
              bool _posiada_funkcje_niskopoziomowe);
};

#endif
