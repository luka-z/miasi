#ifndef Jezyk_programowania_h
#define Jezyk_programowania_h

#include <string>
#include <vector>
#include "../inc/Jezyk.h"

class Jezyk_programowania: public Jezyk
{
    private:

        //atrybuty:
        bool jest_obiektowy;
        bool posiada_skladnie_klamrowa;
        std::vector<std::string> znane_biblioteki;
        std::vector<std::string> znane_algorytmy;

    public:

        //metody:
        void dodaj_znajomosc_biblioteki (std::string nazwa_biblioteki);
        void dodaj_znajomosc_algorytmu (std::string nazwa_konstrukcji_algorytmu);
        char* zamien_kod_na_obiektowy (char *kod);
        virtual void pokaz_zawartosc();
        
        Jezyk_programowania(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy);

};

#endif
