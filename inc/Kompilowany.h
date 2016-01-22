#ifndef Kompilowany
#define Kompilowany

class Kompilowany
{
     private:

         //atrybuty:
         string kompilator;
         bool posiada_funkcje_niskopoziomowe;
         Jezyk_programowania jezyk_programowania;

     public:

         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_kompilator(string kompilator);
         void ustaw_posiada_funkcje_niskopoziomowe (bool posiada_funkcje_niskopoziomowe);

};

#endif
