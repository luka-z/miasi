#include "../inc/Uzytkownik.h"
#include <iostream>

Uzytkownik::Uzytkownik(std::string _imie_nazwisko, int _wiek, std::string _znane_jezyki, std::string _opis):znane_jezyki(1,_znane_jezyki)
{
  imie_nazwisko = _imie_nazwisko;
  wiek = _wiek;
  opis = _opis;
}


void Uzytkownik::pokaz_profil()
{
  std::cout << "Funkcja pokaz_profil instancji klasy Uzytkownik"<< std::endl;
  std::cout << "imie_nazwisko = " <<imie_nazwisko << " wiek = "  <<wiek << " znane_jezyki = " <<znane_jezyki.front() << "opis = " << opis << std::endl;
}
