#ifndef Interface_h
#define Interface_h

#include <vector>
#include <string>
#include "../inc/Baza_danych.h"
#include "../inc/Kompilowany.h"
#include "../inc/Interpretowany.h"
#include "../inc/Administrator.h"
#include <typeinfo>
//using namespace std;
class Element_list_klas
{
public:
  Baza_danych* wskaznik_na_obiekt;
  std::string typ_klasy;
  std::string nazwa_klasy;
};

class Element_list_klas_interpretowany
{
public:
  Interpretowany* wskaznik_na_obiekt;
  std::string nazwa_klasy;
};

class Element_list_klas_kompilowany
{
public:
  Kompilowany* wskaznik_na_obiekt;
  std::string nazwa_klasy;
};

class Element_list_klas_admistrator
{
public:
  Administrator* wskaznik_na_obiekt;
  std::string nazwa_klasy;
};

class Interface
{

private:
  std::vector <Element_list_klas> lista_klas;
  std::vector <Element_list_klas_interpretowany> lista_klas_interpretowany;
  std::vector <Element_list_klas_kompilowany> lista_klas_kompilowany;
  std::vector <Element_list_klas_admistrator> lista_klas_administrator;

  std::string pobierz_str(std::string co_pobrac, std::string wartosc_domyslna);
  int         pobierz_int(std::string co_pobrac, int wartosc_domyslna);
  bool        pobierz_bool(std::string co_pobrac, bool wartosc_domyslna);
  void        czekaj();
  typedef void (Interface::* Interface_klasa_ptr)(void);

  void jezyk_interface_klasa(Interface_klasa_ptr stworz, Interface_klasa_ptr wyswietl);
  
public:
  ~Interface(); 
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

  void IIIciej_generacji_interface_tworzenie();
  void IIIciej_generacji_interface_wyswietlanie();

  void IVtej_generacji_interface_tworzenie();
  void IVtej_generacji_interface_wyswietlanie();

  void Interpretowany_interface_tworzenie();
  void Interpretowany_interface_wyswietlanie();

  void Kompilowany_interface_tworzenie();
  void Kompilowany_interface_wyswietlanie();

  void Administrator_interface_tworzenie();
  void Administrator_interface_wyswietlanie();

  void pokaz_zawartosc_wszystkich_obiektow();
  void pokaz_instancje(std::string typ_klasy);

  void znajdz_instancje(std::string _typ_klasy, std::vector<Element_list_klas>& lista);

  void inicjalizuj_wszystkie_obiekty();

};

#endif
