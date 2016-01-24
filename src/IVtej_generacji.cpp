#include <iostream>
#include "../inc/IVtej_generacji.h"


IVtej_generacji::IVtej_generacji(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,

              bool _posiada_klasy):
                  Jezyk_programowania(
                                      _poziom_trudnosci,
                                      _poziom_zaawansowania,
                                      _nauczyciel,
                                      _lat_nauki,
                                      _zasady_skladni,
                                      _jest_obiektowy,
                                      _posiada_skladnie_klamrowa,
                                      _znane_biblioteki,
                                      _znane_algorytmy)
{
  posiada_klasy = _posiada_klasy;
}

void IVtej_generacji::pokaz_zawartosc()
{
  std::cout << "pokaz_zawartosc() instancji klasy IVtej_generacji" << std::endl;
  std::cout << "posiada_klasy = " << posiada_klasy <<std::endl;
  Jezyk_programowania::pokaz_zawartosc();
}

