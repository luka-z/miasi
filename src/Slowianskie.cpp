#include <iostream>
#include <string>
#include "../inc/Slowianskie.h"

using namespace std;

Slowianskie::Slowianskie(
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
                           std::string _zasady_wymowy,
                           std::string _alfabet,
                           std::string _przypadki):
  Jezyk_naturalny(
                  _poziom_trudnosci,
                  _poziom_zaawansowania,
                  _nauczyciel,
                  _lat_nauki,
                  _zasady_skladni,
                  _lista_czasow_gramatycznych,
                  _posiada_rodzajniki,
                  _kraje_uzywania,
                  _slownik,
                  _zasady_gramatyczne,
                  _zasady_wymowy)
{
  alfabet.push_back(_alfabet);
  przypadki.push_back(_przypadki);

  cout<< "Utworzono instancję klasy Slowianskie." << endl;
}

void Slowianskie::pokaz_zawartosc()
{
  cout << "################################################" <<endl;
  cout << "pokaz_zawartosc() instancji klasy Slowianskie" <<endl;
  cout << "alfabet = "<< alfabet.front() << endl;
  cout << "przypadki = "<< przypadki.front() << endl;
  Jezyk_naturalny::pokaz_zawartosc();
}
