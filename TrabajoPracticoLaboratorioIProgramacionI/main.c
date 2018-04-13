#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\sebas\Desktop\PROGRAMACION 1\TrabajoPracticoProgramacion1\FuncionesTp.h>
#include <C:\Users\sebas\Desktop\PROGRAMACION 1\TrabajoPracticoProgramacion1\validacionesTP.h>

int main()
{
   char respuesta; /**< aqui se almacenara la respuesta para continuar con las operaciones */
    do
    {
        float operandoUno=0;  /**< aqui se almacenara el primer numero de la operacion */

        char operacion;  /**< aqui se almacenara el signo de la operacion */

        float operandoDos=0;  /**< aqui se almacenara el segundo numero de la operacion */




        printf(" Bienvenido. este programa tiene como objetivo calcular operaciones sencillas entre al menos 2 numeros: \n");

        printf(" Las operaciones que se pueden hacer son:\n");
        printf(" Sumas: para realizar una suma utilize el caracter '+'.\n");
        printf(" Restas: para realizar una resta utilize el caracter '-'.\n");
        printf(" Multiplicaciones: para realizar una multiplicacion utilize el caracter '*'.\n");
        printf(" Diviciones: para realizar una divicion utilize el caracter '/'.\n");
        printf(" factoriales: para realizar un factorial utilize el caracter '!'.\n");
        printf("(Para ingresar un '0' por primera vez se debe utilizar el '-0'. Los resultados de las operaciones no se veran afectadas)\n\n");
        printf(" si desea salir. luego de un resultado aparecera la opcion para hacerlo. simplemente escriba cualquier caracter\n a excepcion de 's'.\n\n");

        printf(" Numero uno: %.0f \n Numero dos: %.0f\n", operandoUno, operandoDos); /**< muestra el estado inicial de los numeros */

        printf(" Ingrese el signo de la operacion deseada:\n");

        scanf("%s", &operacion); /**< se escribe el signo de la operacion */


        if(operacion == '!') /**< en caso de factorial */
        {
            operandoUno=validarOperIntFactorial("Ingrese un numero.","Error: Ha ingresado un numero negativo,",operandoUno);
        }
        else
        {
            operandoUno= validarOperFloat("Ingrese un numero.","Error: Ha ingresado un caracter,",operandoUno); /**< invoca a el primer numero*/

            operandoDos=validarOperFloat("ingrese un numero","Error: Ha ingresado un caracter, ",operandoDos);  /**< invoca a el segundo numero */
        }

        float suma;
        suma = sumar(operandoUno,operandoDos);  /**< invoca a la operacion suma */

        float resta;
        resta=restar(operandoUno,operandoDos);  /**< invoca a la operacion resta */

        float division;
        division=dividir(operandoUno,operandoDos);  /**< invoca a la operacion multiplicacion */

        float multiplicacion;
        multiplicacion=multiplicar(operandoUno,operandoDos);  /**< invoca a la operacion division */

        long int factorial;
        factorial=factoriar(operandoUno);  /**< invoca a la operacion factorial */

        switch (operacion)
        {
        case '+':
        {
            printf("La suma es de %.2f",suma);  /**< muestra el resultado de la suma */
            break;
        }
        case '-':
        {
            printf("La resta es de %.2f",resta);  /**< muestra el resultado de la resta*/
            break;
        }
        case '/':
        {
            printf("La division es de %.2f",division);  /**< muestra el resultado de la division */
            break;
        }
        case '*':
        {
            printf("La multiplicacion es de %.2f",multiplicacion);  /**< muestra el resultado de la mulyiplicacion */
            break;
        }
        case '!':
        {
            printf("El factorial es %ld",operandoUno, factorial);  /**< muestra el resultado del factorial */
            break;
        }
        default :  /**< en caso de un signo no definido */
        {
            printf("Ha ocurrido un error: El signo ingresado no representa ninguna operacion capaz de ser realizada por esta calculadora");
        }
        }

        printf("\n Desea continuar?:\n presione 's' para continuar\n");  /**< da la opcion de hacer mas operaciones */
        scanf("%s", &respuesta);

        system("cls");  /**< limpia el compilador para ingresar una nueva operacion */

    }
    while(respuesta == 's'); /**< mientras la respuesta sea 's' se repite el programa */

    return 0;
}
