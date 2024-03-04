# include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300; versión de punto flotante */
main( )
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0 ; /* límite superior de la tabla de temperaturas */
    upper = 50; /* límite superior */
    step = 2.0 ; /* tamaño del incremento */

    fahr = lower;
    printf("%7s %6s\n", "celc","fahr");
    while (celsius <= upper) {
        fahr = (celsius*(9.0/5.0))+32.0;
        printf("%7.0f %6.1f\n",celsius , fahr);
        celsius = celsius + step;
    }
}