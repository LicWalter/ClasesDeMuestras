#include <stdio.h>
#include <math.h>

int main(){

    float cat1, cat2, hipotenusa;

    printf("Digite los catetos del triangulo: ");
    scanf("%f %f", &cat1,&cat2);

    /*raíz (sqrt) pow(potencia)*/
    hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));

    printf("La hipotenusa de su triangulo es igual a: %f", hipotenusa);

    return 0;
}