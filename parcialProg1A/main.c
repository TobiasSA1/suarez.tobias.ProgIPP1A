#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numero;
    int numeroDescuento;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);
    numeroDescuento=aplicarDescuento(numero);
    printf("El numero con descuento es:%d",numeroDescuento);
    /*int longi;
    char frase[200];
    char caracter;
    printf("Ingrese su frase: ");
    scanf ("%s", &frase);
    longi = strlen(frase);
    printf("Ingrese el caracter");
    scanf("%s",caracter);
    contarCaracteres(longi,caracter,frase);*/
    return 0;
}

int aplicarDescuento(int numero)
{
    return numero-(5*numero)/100;
}

void contarCaracteres(int longi,char caracter,char frase[])
{
    int i;
    int cont;
   for(i=0; i<longi; i++)
    {
        if(frase[i]==caracter)
            {
             cont++;
            }
    }
    printf("La cantidad de veces que se repite el caracter es: %d",cont);
}
