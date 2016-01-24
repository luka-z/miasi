#include "../inc/Jezyk.h"
#include <iostream>

Jezyk::Jezyk(Poziom_trudnosci _poziom_trudnosci, Poziom_zaawansowania _poziom_zaawansowania, \
             std::string _nauczyciel, float _lat_nauki, std::string _zasady_skladni):zasady_skladni(1, _zasady_skladni)
{
  std::cout << "Konstruktor klasy Jezyk:" << std::endl;
  poziom_trudnosci = _poziom_trudnosci;
  poziom_zaawasowania = _poziom_zaawansowania;
  nauczyciel = _nauczyciel;
  lat_nauki = _lat_nauki;
}


void Jezyk::pokaz_zawartosc()
{
  std::cout << "pokaz_zawartosc() instancji klasy Jezyk" << std::endl;

  std::cout << "poziom_trudnosci = "    << poziom_trudnosci    << std::endl;
  std::cout << "poziom_zaawasowania = " << poziom_zaawasowania << std::endl;
  std::cout << "nauczyciel = "          << nauczyciel          << std::endl;
  std::cout << "lat_nauki  = "          << lat_nauki           << std::endl;
  std::cout << "zasady_skladni = "      << zasady_skladni[0]   << std::endl;
}
