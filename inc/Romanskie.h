#ifndef Romanskie_h
#define Romanskie_h

#include <vector>
#include "../inc/Jezyk_naturalny.h"

class Romanskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        bool liaison;
        std::vector<char> znaki_niestandardowe;

    public:

        //metody:
        void ustaw_liaison(bool liaison);
        void dodaj_znak_niestandardowy (char z);
        virtual void pokaz_zawartosc();

  Romanskie(
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
               char _znak_niestandardowy);

};

#endif
