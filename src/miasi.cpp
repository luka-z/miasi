#include "../inc/Jezyk_sztuczny.h"

using namespace std;
int main()
{

  Jezyk::Poziom_trudnosci _poziom_trudnosci = Jezyk::latwy;
  Jezyk::Poziom_zaawansowania _poziom_zaawansowania = Jezyk::poczatkujacy;
  string _nauczyciel = "Nauczyciel X";
  float _lat_nauki = 5;
  string _zasady_skladni = "Pierwsza zasada skladni";

  string _lista_czasow_gramatycznych = "Pierwszy czas gramatyczny";
  bool _posiada_rodzajniki = true;
  string _kraje_uzywania = "Pierwszy kraj uzywania";
  Slownik _slownik;
  string _zasady_gramatyczne = "Pierwsza zasada gramatyczna";
  string _zasady_wymowy = "Pierwsza zasada wymowy";

  string _jezykotworca = "Twórca jezyka Y";
  Jezyk_sztuczny::Cel_utworzenia _cel_utworzenia = Jezyk_sztuczny::sztuka;
  string _jezyk_wzorcowy = "Pierwsz jezyk wzorcowy";
  bool _jest_w_uzyciu = true;

  Jezyk_sztuczny a =  Jezyk_sztuczny(_poziom_trudnosci, _poziom_zaawansowania, _nauczyciel, _lat_nauki, &_zasady_skladni, &_lista_czasow_gramatycznych,
     _posiada_rodzajniki, &_kraje_uzywania, _slownik, &_zasady_gramatyczne, &_zasady_wymowy, _jezykotworca, _cel_utworzenia, _jezyk_wzorcowy, _jest_w_uzyciu);
    
  a.pokaz_zawartosc();

  //    Interface interfaceZal;
  //    interfaceZal.interface_glowny();
}
