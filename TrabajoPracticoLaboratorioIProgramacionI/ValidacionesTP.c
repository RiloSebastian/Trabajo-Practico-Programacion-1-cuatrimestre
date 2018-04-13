#include <stdio.h>
#include <stdlib.h>



float validarOperFloat(char mensaje[], char mensajeError[], float num1)
{
    char flag[30]; /**< variable tipo string donde se va a guardar el valor */

    do
    {
        printf("%s \n", mensaje); /**< mensaje solicitando un valor */

        scanf("%s", flag);

        if(flag!=0)
        {
            num1=atof(flag); /**< convierte el valor tipo string a uno tipo float. si da 0 son caracteres */

            break;
        }
        else
        {
            printf("%s", mensajeError); /**< mensaje advirtiendo que el valor no es un numero */
        }
    }
    while(num1==0); /**< mientras que el valor sea 0, no se podra avanzar */

    return num1;

}

long int validarOperIntFactorial(char mensaje [], char mensajeError[],float num1)
{
    long int numEntero=0; /**< aqui se va a almacenar el valor dado */
    do
    {

        printf(" En una operacion factorial, el operando debe ser siempre un numero entero. por este motivo si escribe un numero con\n decimal, solo utilizaremos su parte entera\n\n");


        printf(" %s \n", mensaje); /**< pide un valor */

        scanf("%f", &num1);

        numEntero=(long int)num1; /**< convierte el valor flotante en un entero */

        if(numEntero<0)
        {
            printf("%s", mensajeError); /**< mensaje advirtiendo que el numero es negativo */
        }

    }
    while(numEntero<0); /**< mientras el numero sea negativo no se podra avanzar */

    return numEntero;
}
