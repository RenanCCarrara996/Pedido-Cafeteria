#include <stdio.h>
#include <locale.h>

int main(){

    int tamanho, coffee;
    float valor, mult;

    setlocale(LC_ALL, "Portuguese");

    printf("OP��ES DE CAF� DISPON�VEIS: \n [1] Caf� Expresso R$3,00 \n [2] Capuccino R$4,00 \n [3] Latte R$5,00\n\nDigite aqui: ");
    scanf("%i", &coffee);
    printf("\nQual tamanho voc� deseja?\n [1] Pequeno \n [2] M�dio\n [3] Grande\n Digite aqui: ");
    scanf("%i", &tamanho);

    switch (coffee){
        case 1:
            valor = 3;
            break;
        case 2:
            valor = 4;
            break;
        case 3:
            valor = 5;
            break;
        default:
            printf("Op��o inv�lida.\n");
    }
    switch (tamanho){
        case 1:
            mult = 1;
            break;
        case 2:
            mult = 2;
            break;
        case 3:
            mult = 3;
            break;
        default:
            printf("Tamanho inv�lido.\n");
    }
    valor = valor * mult;
    printf("\nO total a pagar � %.2f", valor);

    return 0;
}
