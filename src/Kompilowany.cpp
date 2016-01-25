#include "../inc/Kompilowany.h"
#include <iostream>


Kompilowany::Kompilowany(
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
              bool _posiada_funkcje_niskopoziomowe):
  jezyk_programowania(_poziom_trudnosci, _poziom_zaawansowania, _nauczyciel, _lat_nauki, _zasady_skladni, _jest_obiektowy, _posiada_skladnie_klamrowa, _znane_biblioteki, _znane_algorytmy)
{
  kompilator = _kompilator;
  posiada_funkcje_niskopoziomowe = _posiada_funkcje_niskopoziomowe;
}


void Kompilowany::pokaz_zawartosc()
{
  std::cout <<"pokaz_zawartosc() instancji klasy Kompilowany" <<std::endl;
  std::cout << "kompilator = " << kompilator <<std::endl;
  std::cout << "posiada_funkcje_niskopoziomowe = " << posiada_funkcje_niskopoziomowe <<std::endl;
  jezyk_programowania.pokaz_zawartosc();
}
