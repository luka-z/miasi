#ifndef IVtej_generacji
#define IVtej_generacji

class IVtej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_klasy;

    public:

        //metody:
        void ustaw_posiada_klasy(bool posiada_klasy);
        virtual void pokaz_zawartosc();

};

#endif
