#ifndef Interpretowany
#define Interpretowany

class Interpretowany
{
     private:

         //atrybuty:
         string interpreter;
         bool kontrola_typow;
         Jezyk_programowania jezyk_programowania;

     public:

         //metody:
         Jezyk_programowania * pobierz_jezyk();
         void dodaj_interpretej (string interpreter);
         void ustaw_kontrola_typow (bool kontrola_typow);

};

#endif
