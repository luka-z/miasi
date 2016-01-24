#ifndef Interface_h
#define Interface_h

#include <vector>
#include <string>
#include "../inc/Baza_danych.h"

//using namespace std;
class Element_list_klas
{
public:
  Baza_danych* wskaznik_na_obiekt;
  std::string nazwa_klasy;
};

class Interface
{

private:
  std::vector <Element_list_klas> lista_klas;

  std::string pobierz_str(std::string co_pobrac, std::string wartosc_domyslna);
  int         pobierz_int(std::string co_pobrac, int wartosc_domyslna);
  bool        pobierz_bool(std::string co_pobrac, bool wartosc_domyslna);

  typedef void (Interface::* Interface_klasa_ptr)(void);

  void jezyk_interface_klasa(Interface_klasa_ptr stworz, Interface_klasa_ptr wyswietl);

public:
  void interface_glowny();

  void jezyk_sztuczny_interface_tworzenie();
  void jezyk_sztuczny_interface_wyswietlanie();

  void jezyk_migowy_interface_tworzenie();
  void jezyk_migowy_interface_wyswietlanie();

  void germanskie_interface_tworzenie();
  void germanskie_interface_wyswietlanie();

  void jezyk_martwy_interface_tworzenie();
  void jezyk_martwy_interface_wyswietlanie();


  void romanskie_interface_tworzenie();
  void romanskie_interface_wyswietlanie();

  void slowianskie_interface_tworzenie();
  void slowianskie_interface_wyswietlanie();

  //void pokaz_zawartosc_wszystkich_obiektow();
  Element_list_klas znajdz_instancje();

};

#endif
