#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void valores_a(double numero, int contador , int repet)
{
    if (contador < 5)
    {
        scanf("%lf", &numero);

        if (numero < 0)
        {
            repet += 1;
        }
        printf("Digite um valor:\n");
        
        valores_a(numero, contador + 1, repet);

    }
    if (contador == 5)
    {
        printf("Foram digitados %d numeros negativos", repet);
    }
}
int main() {
	
    double numero;

    valores_a(numero, 0, 0);


    return 0;

     RB0212
}