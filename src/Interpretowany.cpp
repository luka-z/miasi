#include "../inc/Interpretowany.h"
#include <iostream>


Interpretowany::Interpretowany(
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
              bool _kontrola_typow):
  jezyk_programowania(_poziom_trudnosci, _poziom_zaawansowania, _nauczyciel, _lat_nauki, _zasady_skladni, _jest_obiektowy, _posiada_skladnie_klamrowa, _znane_biblioteki, _znane_algorytmy)
{
  interpreter = _interpreter;
  kontrola_typow = _kontrola_typow;
}


void Interpretowany::pokaz_zawartosc()
{
  std::cout <<"pokaz_zawartosc() instancji klasy Interpretowany" <<std::endl;
  std::cout << "interpreter = " << interpreter <<std::endl;
  std::cout << "kontrola_typow = " << kontrola_typow <<std::endl;
  jezyk_programowania.pokaz_zawartosc();
}
