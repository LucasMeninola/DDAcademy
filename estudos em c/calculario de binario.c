#include <stdio.h>


int main(){

//String do valor log por ser um numero "grande".
long long numero;

printf("Ensira um numerio em Decimal: "); //Printf mostrando a pergunta
scanf("%lld", &numero);
convertDecimalToBinary(numero);
return 0;
}


void convertDecimalToBinary(long long n)
{
    int binaryNum[1000];

    int i = 0, j;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for ( j = i - 1; j >= 0; j--)
        printf("%d",binaryNum[j]);
      /* como consigo armazenar um numero binário? */

 return 10; }

