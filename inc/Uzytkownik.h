#ifndef Uzytkownik
#define Uzytkownik

class Uzytkownik
{
    private:
        //atrybuty:
        string imie_nazwisko;
        int wiek;
        string znane_jezyki[];
        string opis;

    //metody:
        void utworz_profil();
        void zmien_profil();
        void pokaz_profil();
        void wyslij_wiadomosc();
        void czytaj_wiadomosc();
        void polacz_komunikatorem();
};

#endif
