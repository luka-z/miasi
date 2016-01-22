#ifndef Germanskie
#define Germanskie

class Germanskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string przypadki[];
        char znaki_niestandardowe[];

    public:

        //metody:
        void dodaj_znak_niestandardowy (char z);
        void dodaj_przypadek (string przypadek);
        virtual void pokaz_zawartosc();

};

#endif
