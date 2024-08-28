#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *pta = &a, *ptb = &b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (*pta > *ptb) {
        printf("a é maior: %d\n", *pta);
    } else if (*pta < *ptb) {
        printf("b é maior: %d\n", *ptb);
    } else {
        printf("são iguais"); 
    }

    return 0;
}
