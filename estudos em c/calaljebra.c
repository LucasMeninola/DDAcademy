#include <stdio.h>

int main(void){


    int n1;
    int n2;


    printf("\t ==== CONVERSOR DE BINARIO PARA HEX ==== \n");
    printf("\t DIGITE BINARIO:  \n");

    scanf("%d%d", &n1, &n2);

    if(n1 == n2){
    printf("%d eh igual a %d\n", n1 ,n2);
    } //igual ==

    if (n1!= n2){
    printf("%d nao eh igual a %d\n", n1, n2);//difernte
    }

    if (n1 < n2){
    printf("%d eh maior %d\n", n1, n2);
    }

    if(n1 > n2){
    printf("%d eh menor %d\n", n1, n2);
    }

    if(n1 <= n2){
    printf("%d maior ou igual %d\n", n1, n2);
    }

    if(n1 >= n2){
    printf("%d menor ou igual %d\n", n1, n2);
//    else printf("fhndsjfhskdj")

    }
    return 0;
}

