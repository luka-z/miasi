#include <iostream>
#include <cstdlib>
#include <cstring>
#include "../inc/Jezyk_sztuczny.h"

using namespace std;

Jezyk_sztuczny::Jezyk_sztuczny(
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
                               std::string* _zasady_wymowy,

                               std::string _jezykotworca,
                               Cel_utworzenia _cel_utworzenia,
                               std::string _jezyk_wzorcowy,
                               bool _jest_w_uzyciu):
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
    jezykotworca = _jezykotworca;
    cel_utworzenia = _cel_utworzenia;
    jezyk_wzorcowy = _jezyk_wzorcowy;
    jest_w_uzyciu = _jest_w_uzyciu;

    cout<< "Utworzono instancję klasy Jezyk_sztuczny." << endl;
}

void Jezyk_sztuczny::pokaz_zawartosc()
{
  cout << "################################################" <<endl;
  cout << "pokaz_zawartosc() instancji klasy Jezyk_sztuczny" <<endl;
  cout << "jezykoznawca = "<< jezykotworca << endl;
  cout << "cel_utworzenia = "<< cel_utworzenia << endl;
  cout << "jezyk_wzorcowy = " << jezyk_wzorcowy << endl;;
  cout << "jest_w_uzyciu = " << jest_w_uzyciu << endl;
  Jezyk_naturalny::pokaz_zawartosc();
}
