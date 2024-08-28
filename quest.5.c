#include <stdio.h>

int main() {
    int vetor[5];
    int *pont = vetor;

    for (int i = 0; i < 5; i++) {
        scanf("%d", pont + i);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d: %d\n", *(pont+i), 2 * (*(pont+i)));
    }

    return 0;
}