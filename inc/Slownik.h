#ifndef Slownik_h
#define Slownik_h
#include <map>
#include <string>

class Slownik
{
    private:

        //atrybuty:
        std::map<std::string, std::string> slownik;

    public:

        //metody:
        void dodaj_wpis(std::string wpis_w_jezyku1, std::string wpis_w_jezyku2);
        void pokaz_wpis(std::string wpis);
        void aktualizuj_wpis (std::string wpis_w_jezyku1, std::string wpis_w_jezyku2);

        Slownik();
        Slownik(std::map<std::string, std::string> _slownik);


};

#endif
