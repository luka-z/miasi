#include <iostream>
#include "../inc/IIIciej_generacji.h"


IIIciej_generacji::IIIciej_generacji(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy,

              bool _posiada_wskazniki):
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
  posiada_wskazniki = _posiada_wskazniki;
}

void IIIciej_generacji::pokaz_zawartosc()
{
  std::cout << "pokaz_zawartosc() instancji klasy IIIciej_generacji" << std::endl;
  std::cout << "posiada_wskazniki = " << posiada_wskazniki <<std::endl;
  Jezyk_programowania::pokaz_zawartosc();
}

