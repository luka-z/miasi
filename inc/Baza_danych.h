#ifndef Baza_danych_h
#define Baza_danych_h
#include <iostream> 
class Baza_danych
{
    public:

        //metody:
        virtual void pokaz_zawartosc() = 0;
        virtual ~Baza_danych(){};
};

#endif
