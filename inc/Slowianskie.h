#ifndef Slowianskie_h
#define Slowianskie_h

#include <vector>
#include <string>
#include "../inc/Jezyk_naturalny.h"

class Slowianskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
      std::vector<std::string> alfabet;
      std::vector<std::string> przypadki;

    public:

        //metody:
        void dodaj_alfabet (std::string alfabet);
        void dodaj_przypadek(std::string przypadek);
        virtual void pokaz_zawartosc();


  Slowianskie(
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
               std::string _przypadki);


};

#endif
