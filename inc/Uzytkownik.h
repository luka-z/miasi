#ifndef Uzytkownik_h
#define Uzytkownik_h

#include <string>
#include <vector>

class Uzytkownik
{
    private:
        //atrybuty:
        std::string imie_nazwisko;
        int wiek;
        std::vector<std::string> znane_jezyki;
        std::string opis;

    //metody:
        void utworz_profil();
        void zmien_profil();
        void wyslij_wiadomosc();
        void czytaj_wiadomosc();
        void polacz_komunikatorem();
    public: 
        void pokaz_profil();
        Uzytkownik(std::string _imie_nazwisko, int _wiek, std::string _znane_jezyki, std::string _opis);
};

#endif
