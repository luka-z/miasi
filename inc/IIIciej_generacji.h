#ifndef IIIciej_generacji
#define IIIciej_generacji

class IIIciej_generacji: public Jezyk_programowania
{
    private:

        //atrybuty:
        bool posiada_wskazniki;

    public:

        //metody:
        void ustaw_posiada_wskazniki (bool posiada_wskazniki);
        virtual void pokaz_zawartosc();

};

#endif
