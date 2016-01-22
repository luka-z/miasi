#ifndef Romanskie
#define Romanskie

class Romanskie: public Jezyk_naturalny
{
    private:

        //atrybuty:
        bool liaison;
        char znaki_niestandardowe[];

    public:

        //metody:
        void ustaw_liaison(bool liaison);
        void dodaj_znak_niestandardowy (char z);
        virtual void pokaz_zawartosc();

};

#endif
