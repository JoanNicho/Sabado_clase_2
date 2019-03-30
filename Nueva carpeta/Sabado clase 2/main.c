#include <stdio.h>
#include <stdlib.h>
#include "funcionespuntero.h"
int main()
{
    int sePudo;
    float respuesta;
    int primerEdad;
    int segundaEdad;
    pedirEdad(&primerEdad);
    pedirEdad(&segundaEdad);
    sePudo=dividir(primerEdad,segundaEdad,&respuesta);
    if(sePudo==1)
    {
        printf("La respuesta es:%f",respuesta);
    }else
    {
        printf("No se puede");
    }




  /*  int miEdad;
    int retorno;
    retorno=pedirEdad(&miEdad);
    if(retorno==1)
    {
        printf("Su edad es %d",miEdad);
    }else
    {
        printf("No se pudo");

    }

*/




 /*   printf("Hello World!\n");
    verSiAnda();

    int sueldo;
    printf("\nlugar sueldo %d",&sueldo);
    sueldo=10000;
    cambiarValor(sueldo);
    printf("\nPor valor:%d",sueldo);
    cambiarReferencia(&sueldo);
    printf("\nPor referencia:%d",sueldo);
*/


    return 0;
}
