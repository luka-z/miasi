#ifndef IIIciej_generacji_h
#define IIIciej_generacji_h
#include "../inc/Jezyk_programowania.h"
#include <string>

class IIIciej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_wskazniki;

    public:

        //metody:
        void ustaw_posiada_wskazniki (bool posiada_wskazniki);
        virtual void pokaz_zawartosc();
        
        IIIciej_generacji(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,
              
              bool posiada_wskazniki
              );
};

#endif
