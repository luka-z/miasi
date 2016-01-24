#include <iostream>
#include <string>
#include "../inc/Jezyk_migowy.h"

using namespace std;

Jezyk_migowy::Jezyk_migowy(
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
                           string _jezyk_wzorcowy,
                           bool _alfabet_jednoreczny):
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
  jezyk_wzorcowy = _jezyk_wzorcowy;
  alfabet_jednoreczny = _alfabet_jednoreczny;

  cout<< "Utworzono instancję klasy Jezyk_migowy." << endl;
}

void Jezyk_migowy::pokaz_zawartosc()
{
  cout << "################################################" <<endl;
  cout << "pokaz_zawartosc() instancji klasy Jezyk_migowy" <<endl;
  cout << "jezyk_wzorcowy= "<< jezyk_wzorcowy << endl;
  cout << "alfabet_jednoreczny = "<< alfabet_jednoreczny << endl;
  Jezyk_naturalny::pokaz_zawartosc();
}
