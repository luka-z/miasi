#ifndef Jezyk_martwy
#define Jezyk_martwy

class Jezyk_martwy: public Jezyk
{
    private:

        //atrybuty:
        bool udokumentowane_zasady_wymowy;
        bool unikalne_pismo;
        bool posiada_slownik;
        Slownik slownik;
        string zasady_wymowy[];

    public:

        void ustaw_udokumentowane_zasady_wymowy (bool udokumentowane_zasady_wymowy);
        void ustaw_unikalne_pismo (bool unikalne_pismo);
        void ustaw_posiada_slownik (bool posiada_slownik);
        void dodaj_zasade_wymowy (string nazwa_zasady);
        virtual void pokaz_zawartosc();

};

#endif
