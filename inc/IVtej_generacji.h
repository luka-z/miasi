#ifndef IVtej_generacji_h
#define IVtej_generacji_h
#include "../inc/Jezyk_programowania.h"
#include <string>
class IVtej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_klasy;

    public:

        //metody:
        void ustaw_posiada_klasy(bool posiada_klasy);
        virtual void pokaz_zawartosc();
IVtej_generacji(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,
              
              bool _posiada_klasy
              );
};

#endif
