#ifndef Jezyk_migowy_h
#define Jezyk_migowy_h

#include <string>
#include "../inc/Jezyk_naturalny.h"

class Jezyk_migowy: public Jezyk_naturalny
{
private:

  //atrybuty:
  std::string jezyk_wzorcowy;
  bool alfabet_jednoreczny;

public:

  //metody:
  void podaj_jezyk_wzorcowy(std::string jezyk_wzorcowy);
  void ustaw_alfabet_jednoreczny (bool alfabet_jednoreczny);
  virtual void pokaz_zawartosc();

  Jezyk_migowy(
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
               std::string _jezyk_wzorcowy,
               bool _alfabet_jednoreczny);
};

#endif
