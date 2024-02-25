#include <stdio.h>



int main()
{
    char z[50];
    int x, y, suma=0, resta=0, mult=0, div=0 ;
   
    printf("Digite dos numeros: ");
    scanf("%i %i",&x,&y);
    suma = x + y;
    resta = x - y;
    div = x / y;
    mult = x * y;

    printf("\nSuma: %i",suma);
    printf("\nResta: %i",resta);
    printf("\nMultiplicacion: %i",mult);
    printf("\nDivision: %i",div);
    return 0;
}