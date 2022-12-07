#include <stdio.h>

int main()

{

    int num1;
    int num2;
    int opcao;
    int soma;
    int subtracao;
    int divisao;
    int multiplicacao;

    printf("-=-=-=-=-=-=--=--==-=-=-=-=-=--==-=-=-=-=-==-=\n");
    printf("Bem vindo a calculadora de numeros inteiros\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );

    while (opcao != 5){
        printf("\nEscolha a operacao [1]SOMA, [2]SUBTRACAO, [3]DIVISAO, [4]MULTIPLICACAO, [5]SAIR: ");
        scanf("%i", &opcao);
        if (opcao == 5){
        printf("Voce escolheu sair!\n");
        break;

        }
        printf("Digite o PRIMEIRO numero: ");
        scanf("%i", &num1);
        printf("Digite o SEGUNDO numero:");
        scanf("%i", &num2);

        if (opcao == 1){
            printf("Voce escolheu SOMA!\n");
            soma = num1 + num2;
            printf("%i + %i = %i\n", num1, num2, soma);

        }
        if (opcao == 2){
            printf("Voce escolheu SUBTRACAO!\n");
            subtracao = num1 - num2;
            printf("%i - %i = %i\n", num1, num2, subtracao);
        }
        if (opcao == 3){
            printf("Voce escolheu DIVISAO!\n");
            divisao = num1 / num2;
            printf("%i / %i = %i\n", num1, num2, divisao);

        }
        if (opcao == 4){
            printf("Voce escolheu MULTIPLICACAO!\n");
            multiplicacao = num1 * num2;
            printf("%i * %i = %i\n", num1, num2, multiplicacao);

        }

    }
    printf("Ate a proxima");
    return 0;
}
