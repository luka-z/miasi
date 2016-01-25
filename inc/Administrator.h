#ifndef Administrator_h
#define Administrator_h
#include "../inc/Uzytkownik.h"

class Administrator: public Uzytkownik
{
    public:
        //metody:
        void moderuj_czat();
        void akceptuj_uzytkownika(std::string imie_nazwisko);
        void usun_uzytkownika(std::string imie_nazwisko);
        void aktualizuj_baze_danych();
        void aktualizuj_serwis();
        void pokaz_zawartosc();

        Administrator(std::string _imie_nazwisko, int _wiek, std::string _znane_jezyki, std::string _opis);
};
#endif
