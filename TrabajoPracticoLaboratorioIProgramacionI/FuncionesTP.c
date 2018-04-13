float sumar (float num1, float num2)
{
    float resultado=0; /**< aqui se almacenara el resultado de la operacion */
    resultado= num1+num2; /**< se realiza la operacion */
    return resultado;
}

float restar(float num1, float num2)
{
    float resultado=0;  /**< aqui se almacenara el resultado de la operacion */
    resultado= num1-num2;  /**< se realiza la operacion */
    return resultado;
}

float multiplicar (float num1, float num2)
{
    float resultado=0;  /**< aqui se almacenara el resultado de la operacion */
    resultado= num1*num2;  /**< se realiza la operacion */
    return resultado;
}

float dividir (float num1, float num2)
{
    float resultado=0;  /**< aqui se almacenara el resultado de la operacion */
    resultado= num1/num2;  /**< se realiza la operacion */
    return resultado;
}

long int factoriar(num1)
{
    int resultado=1;  /**< aqui se almacenara el resultado de la operacion */
    int i;  /**< una variable auxiliar para inicializar la serie de multiplicaciones */

    for(i=num1; i>=1; i--) /**< el auxiliar decrecera desde el valor del numero hasta llegar a uno */
    {
        resultado*= i; /**< el numero se multiplicara por un auxiliar cada vez menor */
    }
    return resultado;
}
