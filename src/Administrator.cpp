#include "../inc/Administrator.h"
#include "../inc/Uzytkownik.h"
#include <iostream>

Administrator::Administrator(std::string _imie_nazwisko, int _wiek, std::string _znane_jezyki, std::string _opis):
                  Uzytkownik(_imie_nazwisko, _wiek, _znane_jezyki, _opis){};
void Administrator::pokaz_zawartosc()
{
  std::cout << "pokaz_zawartosc instancji klasy Administrator" << std::endl;
  Uzytkownik::pokaz_profil();
}
