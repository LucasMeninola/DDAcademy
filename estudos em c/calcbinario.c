#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 255
#define ALG 17



// Função que imprime o menu da calculadora
void menu(void) {
    printf("\n===========================================================\n");
    printf("\nBEM VINDO AO CONVERSOR DE BINARIO HEXADECIMAL\n\n");
    printf("QUAL OPERACAO DESEJA REALIZAR? \n\n");
    printf("[ 1 ] BINARIO     ->  HEXADECIMAL \n");
    printf("[ 2 ] HEXADECIMAL ->  BINARIO\n");
    printf("\n===========================================================\n");
}



int main(void) {
    int opcao;
    menu();
    printf("QUAL OPERACAO DESEJA REALIZAR? (EXEMPLO OPCAO 1):");
    scanf("%d", &opcao);
    process_calc(opcao);

    return 0;
}



// Função que chama as funções correspondentes à opção escolhida
void process_calc(int opt) {
    int number;
    char str[SIZE];
    switch(opt) {
        case 0 :
            printf("CALCULADORA ENCERRADA!\n");
            exit(0);
        case 1 :
            printf("BINARIO: ");
            scanf("%s", str);
            baseToDec(str, 2);
            break;

        case 2 :
            printf("HEXADECIMAL = ");
            scanf("%s", str);
            baseToDec(str, 16);
            break;

        default :
            printf("OPÇÃO NÃO PERMITIDA!\nTENTE NOVAMENTE\n");
            break;
    }
}





// Esta função converte um número decimal para a base 2, 8 ou 16.
// Recebe como parâmetro um número decimal (num_dec), e a base (base) cujo número será convertido.
void decToBase(int num_dec, int base) {
   char resto[ALG] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}, num_conv[SIZE];
   int indx = 0;

   // Este loop realiza as operações de divisão. Os restos são guardados no vetor 'num_conv'
   while(num_dec > 0) {
       num_conv[indx] = resto[num_dec % base];
       num_dec /= base;
       indx++;
   }

   // Exclui o caractere especial '\0' do final da string
   indx -= 1;

   // Utilizado para identificar a saída do programa
   switch(base) {
       case 2 : printf("BINÁŔIO: "); break;
       case 8 : printf("OCTAL: "); break;
       case 16 : printf("HEXADECIMAL: "); break;
   }

   // Inverte a string contida no vetor num_conv
   for(indx; indx >= 0; indx--)
       printf("%c", num_conv[indx]);
   printf("\n");

}

// Esta função permite converter um número na base 2, 8 ou 16 para a base decimal.
// Recebe como parâmetro uma string (representação do número), e um número inteiro que
// determina em qual base está o número do primeiro parâmetro.
void baseToDec(char* num_base, int base) {
    int indx = 0, exp = 0, len = 0, dec = 0, num = 0;

    // Este loop determina o tamanho da string
    while(num_base[len] != '\0') {
        len++;
    }

    // Neste loop, a string é percorrida de trás para frente. Cada caractere é convertido
    // em um número inteiro, multiplicado pela base elevada ao expoente (0..Comprimento da string)
    // e somado ao valor da variável 'dec', que recebe as somas sucessivas.
    for(exp, indx=(len-1); exp < len; exp++, indx--) {
        if(base == 16) {
            switch(num_base[indx]) {
                case 'A' : num = 1010; break;
                case 'a' : num = 1010; break;
                case 'B' : num = 1011; break;
                case 'b' : num = 1011; break;
                case 'C' : num = 1100; break;
                case 'c' : num = 1100; break;
                case 'D' : num = 1101; break;
                case 'd' : num = 1101; break;
                case 'E' : num = 1110; break;
                case 'e' : num = 1110; break;
                case 'F' : num = 1111; break;
                case 'f' : num = 1111; break;
                default : num = (int)num_base[indx] - (int)'0';
            }
        }
        else
            num = (int)num_base[indx] - (int)'0';

        // Aqui avalia se o usuário digitou um número válido ou não!
        if(num > (base-1) || num < 0) {
            printf("Você informou um número inválido!\n");
            exit(0);
        }
        dec += num * pow(base, exp);
    }

    // O número convertido para decimal é exibido
    printf("HEXADECIMAL: %d\n", dec);
}




