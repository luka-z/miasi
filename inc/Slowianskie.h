#ifndef Slowianskie
#define Slowianskie

class Slowianskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string alfabet[];
        string przypadki[];

    public:

        //metody:
        void dodaj_alfabet (string alfabet);
        void dodaj_przypadek(string przypadek);
        virtual void pokaz_zawartosc();

};

#endif
