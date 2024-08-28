#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = NULL, *b = NULL;

    if(&a > &b){
        printf("A Maior: %p", (void *)a);
        
    }else{
        printf("B Maior: %p", (void *)a);
    }
}