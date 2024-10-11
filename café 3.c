#include <stdio.h>
#include <locale.h>

int main(){

    int tamanho, coffee;
    float valor, mult;

    setlocale(LC_ALL, "Portuguese");

    printf("OPÇÕES DE CAFÉ DISPONÍVEIS: \n [1] Café Expresso R$3,00 \n [2] Capuccino R$4,00 \n [3] Latte R$5,00\n\nDigite aqui: ");
    scanf("%i", &coffee);
    printf("\nQual tamanho você deseja?\n [1] Pequeno \n [2] Médio\n [3] Grande\n Digite aqui: ");
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
            printf("Opção inválida.\n");
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
            printf("Tamanho inválido.\n");
    }
    valor = valor * mult;
    printf("\nO total a pagar é %.2f", valor);

    return 0;
}
