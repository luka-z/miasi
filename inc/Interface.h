#ifndef Element_list_klas
#define Element_list_klas
#ifndef Interface
#define Interface

#include <vector>
#include <string>
#include "../inc/Baza_danych.h"

using namespace std;

class Element_list_klas
{
     public:
        Baza_danych* wskaznik_na_obiekt;
        string nazwa_klasy;
};

class Interface
{
    private:
      std::vector <Element_list_klas> lista_klas;
    public:
        void interface_glowny();
        void jezyk_sztuczny_interface();
        void jezyk_sztuczny_interface_tworzenie();
        //void pokaz_zawartosc_wszystkich_obiektow();
        Element_list_klas znajdz_instancje();


};

#endif
