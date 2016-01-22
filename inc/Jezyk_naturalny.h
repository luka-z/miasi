#ifndef Jezyk_naturalny_h
#define Jezyk_naturalny_h

#include "../inc/Jezyk.h"
#include "../inc/Slownik.h"
#include "../inc/Baza_danych.h"

#include <string>

class Jezyk_naturalny: public Jezyk
{
    private:

        //atrybuty:
        std::string* lista_czasow_gramatycznych;
        bool posiada_rodzajniki;
        std::string* kraje_uzywania;
        Slownik slownik;
        std::string* zasady_gramatyczne;
        std::string* zasady_wymowy;

    public:
        //metody:
        void dodaj_czas (std::string nazwa_czasu);
        void ustaw_posiada_rodzajniki (bool posiada_rodzajniki);
        void dodaj_kraj_uzywania (std::string kraj);
        void dodaj_zasade_gram (std::string nazwa_zasady);
        void dodaj_zasade_wymowy (std::string nazwa_zasady);
        std::string przetlumacz (std::string tekst_wejsciowy);
        virtual void pokaz_zawartosc();

        Jezyk_naturalny(
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
              std::string* _zasady_wymowy);
};

#endif
