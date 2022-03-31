#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tempo = 0, lesmas = 5;
    int velocidade[4];
    int maiorNum = 0;

    printf("Para esta maratona, foram escolhidas apenas 5 lesmas.\n\n");

    for (int t = 0; t < 5; t++) {
        printf("Digite a velocidade seguida da %dª lesma: ", t+1);
        scanf("%d%*c", &velocidade[t]);
    }

    printf("\nDigite o tempo da maratona: ");
    scanf("%d%*c", &tempo);

    printf("\nA lesma mais eficiente é a de velocidade:\n");

    void checarMaiorNum (int numRecebido) {
        if (numRecebido > maiorNum) {
            maiorNum = numRecebido;
        }
    }

    for (int t = 0; t < 5; t++) {
        if (tempo >= 3) {
            if (velocidade[t] <= 10) {
                checarMaiorNum(velocidade[t]);
            }
        } else if (tempo >= 2 || tempo < 3) {
            if (velocidade[t] > 10 || velocidade[t] <= 20) {
                checarMaiorNum(velocidade[t]);
            }
        } else if (tempo <= 1 || tempo < 2) {
            if (velocidade[t] > 20 || velocidade[t] <= 100) {
                checarMaiorNum(velocidade[t]);
            }
        }
    }

    printf("%d\n", maiorNum);

    return 0;
}
