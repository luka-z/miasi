#ifndef Jezyk_programowania
#define Jezyk_programowania

class Jezyk_programowania: public Jezyk
{
    private:

        //atrybuty:
        bool jest_obiektowy;
        bool posiada_skladnie_klamrowa;
        string znane_biblioteki[];
        string znane_algorytmy[];

    public:

        //metody:
        void dodaj_znajomosc_biblioteki (string nazwa_biblioteki);
        void dodaj_znajomosc_algorytmu (string nazwa_konstrukcji_algorytmu);
        char* zamien_kod_na_obiektowy (char *kod);
        virtual void pokaz_zawartosc();

};

#endif
