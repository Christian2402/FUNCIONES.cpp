#include <stdio.h>
#include <stdlib.h>

 int factorial (int a);

 int main()
 {
     int N1;
     cout<<"introduzca el valor del numero\n\n"<<endl;
     cin >>N1;
     int fact = factorial (N1);

     cout<<"El " <<N1>> " Es " <<fact<<" \n\n"<<endl;
     return 0;

 }


int factorial (int a)
{
    int i;
    int resultado = 1;
    for (i = 1; i<= a; i++)
    {
        resultado *= i;

    }
    return resultado;
}
