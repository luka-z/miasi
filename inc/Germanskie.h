#ifndef Germanskie_h
#define Germanskie_h

#include <string>
#include <vector>
#include "../inc/Jezyk_naturalny.h"


class Germanskie: public Jezyk_naturalny
{
private:

  //atrybuty:
  std::vector<std::string> przypadki;
  std::vector<char> znaki_niestandardowe;

public:

  //metody:
  void dodaj_znak_niestandardowy (char z);
  void dodaj_przypadek (std::string przypadek);
  virtual void pokaz_zawartosc();

  Germanskie(
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
               std::string _przypadek,
               char _znak_niestandardowy);


};

#endif
