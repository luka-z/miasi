#include "../inc/Jezyk_martwy.h"
#include <iostream>

Jezyk_martwy::Jezyk_martwy(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              bool _udokumentowane_zasady_wymowy,
              bool _unikalne_pismo,
              bool _posiada_slownik,
              Slownik _slownik,
              std::string _zasada_wymowy
              ):
                      Jezyk(_poziom_trudnosci,
                      _poziom_zaawansowania,
                      _nauczyciel,
                      _lat_nauki,
                      _zasady_skladni),
                      zasady_wymowy(1, _zasada_wymowy)
{
        std::cout << "Konstruktor klasy Jezyk_martwy" << std::endl;
        udokumentowane_zasady_wymowy = _udokumentowane_zasady_wymowy;
        unikalne_pismo = _unikalne_pismo;
        posiada_slownik = _posiada_slownik;
        slownik = _slownik;
}


void Jezyk_martwy::pokaz_zawartosc()
{

  std::cout << "pokaz_zawartosc() instancji klasy Jezyk_martwy" << std::endl;
  std::cout << "udokumentowane_zasady_wymowy = " << udokumentowane_zasady_wymowy  << std::endl;
  std::cout << "unikalne_pismo = "               << unikalne_pismo                << std::endl;
  std::cout << "posiada_slownik = "             << posiada_slownik                << std::endl;
  //std::cout << "slownik = "                    << slownik                       << std::endl;
  std::cout << "zasady_wymowy = "              << zasady_wymowy[0]                << std::endl;
  Jezyk::pokaz_zawartosc();
}

