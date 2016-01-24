#include "../inc/Jezyk_programowania.h"
#include <iostream>

Jezyk_programowania::Jezyk_programowania(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _jest_obiektowy,
              bool _posiada_skladnie_klamrowa,
              std::string _znane_biblioteki,
              std::string _znane_algorytmy):
                      Jezyk(_poziom_trudnosci,
                      _poziom_zaawansowania,
                      _nauczyciel,
                      _lat_nauki,
                      _zasady_skladni),
                      znane_biblioteki(1,_znane_biblioteki),znane_algorytmy(1,_znane_algorytmy)
{
        std::cout << "Konstruktor klasy Jezyk_programowania" << std::endl;
        jest_obiektowy = _jest_obiektowy;
        posiada_skladnie_klamrowa = _posiada_skladnie_klamrowa;
}


void Jezyk_programowania::pokaz_zawartosc()
{

  std::cout << "pokaz_zawartosc() instancji klasy Jezyk_programowania" << std::endl;
  std::cout << "jest_obiektowy = "            << jest_obiektowy               << std::endl;
  std::cout << "posiada_skladnie_klamrowa = " << posiada_skladnie_klamrowa    << std::endl;
  std::cout << "znane_biblioteki = "          << znane_biblioteki.front()     << std::endl;
  std::cout << "znane_algorytmy = "           << znane_algorytmy.front()      << std::endl;
  Jezyk::pokaz_zawartosc();
}

