#ifndef Jezyk_migowy
#define Jezyk_migowy

class Jezyk_migowy: public Jezyk_naturalny
{
    private:

        //atrybuty:
        string jezyk_wzorcowy;
        bool alfabet_jednoreczny;

    public:

        //metody:
        void podaj_jezyk_wzorcowy(string jezyk_wzorcowy);
        void ustaw_alfabet_jednoreczny (bool alfabet_jednoreczny);
        virtual void pokaz_zawartosc();

};

#endif
