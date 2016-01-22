#include "../inc/Jezyk_naturalny.h"
#include <iostream>

Jezyk_naturalny::Jezyk_naturalny(
              Poziom_trudnosci _poziom_trudnosci,
              Poziom_zaawansowania _poziom_zaawansowania,
              std::string _nauczyciel,
              float _lat_nauki,
              std::string* _zasady_skladni,

              std::string* _lista_czasow_gramatycznych,
              bool _posiada_rodzajniki,
              std::string* _kraje_uzywania,
              Slownik _slownik,
              std::string* _zasady_gramatyczne,
              std::string* _zasady_wymowy):
                      Jezyk(_poziom_trudnosci,
                      _poziom_zaawansowania,
                      _nauczyciel,
                      _lat_nauki,
                      _zasady_skladni)
{
        std::cout << "Konstruktor klasy Jezyk_naturalny" << std::endl;
        lista_czasow_gramatycznych = _lista_czasow_gramatycznych;
        posiada_rodzajniki = _posiada_rodzajniki;
        kraje_uzywania = _kraje_uzywania;
        slownik = _slownik;
        zasady_gramatyczne = _zasady_gramatyczne;
        zasady_wymowy = _zasady_wymowy;
}


void Jezyk_naturalny::pokaz_zawartosc()
{

  std::cout << "pokaz_zawartosc() instancji klasy Jezyk_naturalny" << std::endl;
  std::cout << "lista_czasow_gramatycznych = " << *lista_czasow_gramatycznych   << std::endl;
  std::cout << "posiada_rodzajniki = "         << posiada_rodzajniki           << std::endl;
  std::cout << "kraje_uzywania = "             << *kraje_uzywania               << std::endl;
  //std::cout << "slownik = "                    << slownik                      << std::endl;
  std::cout << "zasady_gramatyczne = "         << *zasady_gramatyczne           << std::endl;
  std::cout << "zasady_wymowy = "              << *zasady_wymowy                << std::endl;
  Jezyk::pokaz_zawartosc();
}

