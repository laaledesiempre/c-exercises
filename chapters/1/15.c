#include <stdio.h>

float fahrenheith(int celsius);
float celsius(int fahrenheith);

int main( )
{
    float fahr;
    
    int lower, upper, step;

    lower = 0 ; /* límite superior de la tabla de temperaturas */
    upper = 50; /* límite superior */
    step = 2.0 ; /* tamaño del incremento */

    fahr = lower;
    printf("%7s %6s\n","fahr", "celc");
    while (fahr <= upper) {
        printf("%7.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }
}

float fahrenheith(int c){
    int fahr;
    fahr=(c*(9.0/5.0))+32.0;
    return fahr;
}
float celsius(int f){
    int cels;
    cels=(5.0/9.0)*(f-32);
    return cels;
}