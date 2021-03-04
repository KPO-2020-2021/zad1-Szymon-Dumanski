#include <stdio.h>

// w c program dziala poprawnie

double Dodaj();


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2); //w cpp wystepuje zbyt wiele argumentow dla funkcji double

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
