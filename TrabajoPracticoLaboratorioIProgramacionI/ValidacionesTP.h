#ifndef VALIDACIONESTP_H_INCLUDED
#define VALIDACIONESTP_H_INCLUDED

/** \brief se asegura de que se ingresen numeros flotantes
 *
 * \param mensaje donde se pedira un numero
 * \param mensaje de error en caso de no ingresar un numero flotante
 * \param numero donde se va a guardar el valor dado
 * \return el flotante validado
 */
float validarOperFloat(char mensaje[], char mensajeError[], float num1);


/** \brief se asegura de que se ingresen numeros enteros positivos
 *
 * \param mensaje donde se pedira un numero
 * \param mensaje de error en caso de no ingresar un numero positivo
 * \return el entero positivo validado
 */
long int validarOperIntFactorial(char mensaje [], char mensajeError[],float num1);

#endif // VALIDACIONESTP_H_INCLUDED
