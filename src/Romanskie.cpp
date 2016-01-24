#include <iostream>
#include <string>
#include "../inc/Romanskie.h"

using namespace std;

Romanskie::Romanskie(
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
                           bool _liaison,
                           char _znak_niestandardowy):
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
  liaison = _liaison;
  znaki_niestandardowe.push_back(_znak_niestandardowy);

  cout<< "Utworzono instancję klasy Romanskie." << endl;
}

void Romanskie::pokaz_zawartosc()
{
  cout << "################################################" <<endl;
  cout << "pokaz_zawartosc() instancji klasy Romanskie" <<endl;
  cout << "liaison= "<< liaison << endl;
  cout << "znaki_niestandardowe = "<< znaki_niestandardowe.front() << endl;
  Jezyk_naturalny::pokaz_zawartosc();
}
