#ifndef Administrator
#define Administrator

class Administrator: public Uzytkownik
{
    public:
        //metody:
        void moderuj_czat();
        void akceptuj_uzytkownika(string imie_nazwisko);
        void usun_uzytkownika(string imie_nazwisko);
        void aktualizuj_baze_danych();
        void aktualizuj_serwis();
};

#endif
