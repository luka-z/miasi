#include "../inc/Jezyk_naturalny.h"
#include <iostream>

Jezyk_naturalny::Jezyk_naturalny(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string _zasady_skladni,

              std::string _lista_czasow_gramatycznych,
              bool _posiada_rodzajniki,
              std::string _kraje_uzywania,
              Slownik _slownik,
              std::string _zasady_gramatyczne,
              std::string _zasady_wymowy):
                      Jezyk(_poziom_trudnosci,
                      _poziom_zaawansowania,
                      _nauczyciel,
                      _lat_nauki,
                      _zasady_skladni),
                      lista_czasow_gramatycznych(1,_lista_czasow_gramatycznych),
                      kraje_uzywania(1,_kraje_uzywania),
                      zasady_gramatyczne(1, _zasady_gramatyczne),
                      zasady_wymowy(1, _zasady_wymowy)
{
        std::cout << "Konstruktor klasy Jezyk_naturalny" << std::endl;
        posiada_rodzajniki = _posiada_rodzajniki;
        slownik = _slownik;
}


void Jezyk_naturalny::pokaz_zawartosc()
{

  std::cout << "pokaz_zawartosc() instancji klasy Jezyk_naturalny" << std::endl;
  std::cout << "lista_czasow_gramatycznych = " << lista_czasow_gramatycznych[0]   << std::endl;
  std::cout << "posiada_rodzajniki = "         << posiada_rodzajniki           << std::endl;
  std::cout << "kraje_uzywania = "             << kraje_uzywania[0]               << std::endl;
  //std::cout << "slownik = "                    << slownik                      << std::endl;
  std::cout << "zasady_gramatyczne = "         << zasady_gramatyczne[0]           << std::endl;
  std::cout << "zasady_wymowy = "              << zasady_wymowy[0]                << std::endl;
  Jezyk::pokaz_zawartosc();
}

