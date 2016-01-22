#include "../inc/Slownik.h"
#include <iostream>

using namespace std;

Slownik::Slownik()
{
  cout << "Wywołano konstruktor klasy Slownik" << endl;
}

Slownik::Slownik(map<string, string> _slownik)
{
  cout << "Wywołano konstruktor klasy Slownik" << endl;
  slownik = _slownik;
}


