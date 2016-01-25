#ifndef Interpretowany_h
#define Interpretowany_h
#include <string>
#include "../inc/Jezyk_programowania.h"

class Interpretowany
{
     private:

         //atrybuty:
         std::string interpreter;
         bool kontrola_typow;
         Jezyk_programowania jezyk_programowania;

     public:
         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_interpretej (std::string interpreter);
         void ustaw_kontrola_typow (bool kontrola_typow);
         void pokaz_zawartosc();
         Interpretowany(
              Jezyk::Poziom_trudnosci _poziom_trudnosci,
              Jezyk::Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,
              std::string _interpreter,
              bool _kontrola_typow);

};

#endif
