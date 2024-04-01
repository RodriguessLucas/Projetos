/*8 - Escreva um programa que leia um número inteiro do teclado e exiba a tabuada desse número até 
10.
*/
#include <stdio.h>

int tabuada(int numero);

int main(){
    int entrada;
    printf("Digite um numero:\n");
    scanf("%d", &entrada);
    tabuada(entrada);
};

int tabuada(int numero){
    int contador;
    for (contador = 0; contador <=10; contador++){
        printf("%d x %d = %d\n",numero, contador, numero*(contador));
    };
    return 0;
};