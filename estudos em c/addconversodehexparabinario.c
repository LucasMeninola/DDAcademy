#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define decimal 1
#define hexa 2
#define caractere 3




int hexbin(char bin[], int type){

//Opção 7 - Hexa -> Decimal
        else if (opc == '7') {
 //Zera a variável de valor Decimal
            valor_decimal = 0;

 //Mostra mensagem para inserir valor hexa
            printf("Insira o valor hexa: ");
            gets(valor_hexa);
 //Pega o tamanho da string
            tamanho_string = strlen(valor_hexa);
            tamanho_string--;

//Percorre todas as posições da string
            for(sequencial=0; valor_hexa[sequencial]!='\0'; sequencial++)
            {
 //Se for maior ou igual a 0 e menor ou igual a 9, será o valor retirando 48 (tabela ascii)
                if(valor_hexa[sequencial]>='0' && valor_hexa[sequencial]<='9')
                {
                    valor_temp = valor_hexa[sequencial] - 48;
                    }

 //Se for maior ou igual a a e menor ou igual a f, será o valor retirando 97 (tabela ascii) + 10 (0 a 9)
                        else if(valor_hexa[sequencial]>='a' && valor_hexa[sequencial]<='f')
                        {
                            valor_temp = valor_hexa[sequencial] - 97 + 10;
                                }

//Se for maior ou igual a A e menor ou igual a F, será o valor retirando 65 (tabela ascii) + 10 (0 a 9)
                                    else if(valor_hexa[sequencial]>='A' && valor_hexa[sequencial]<='F')
                                        {
                                            valor_temp = valor_hexa[sequencial] - 65 + 10;
                                                    }

                }

        }



int binNum(char bin[], int type){
    int i;
    int j;
    int num=0;
    for(i=0;i<8;i++){
        if(bin[i] == '1')
                num = (num*2)+1;
        if(bin[i] == '0')
                num = (num*2);
    }
    if(type==1) printf("Decimal: %d", num);
    if(type==2) printf("Hexadecimal: %x", num);
    if(type==3) printf("Caractere: %c", num);
}

int menu(void){
    char opcao[10];
    int op;

    printf("\n");
    printf("\t1. Binario para decimal\n");
    printf("\t2. Binario para hexadecimal\n");
    printf("\t3. Binario para caractere\n");
    printf("\t4. Sair\n\n");
    do{
        inicio:
        printf("\tDigite sua opcao: ");
        gets(opcao);
        op = atoi(opcao);
        switch(op){
                case 1:
                                binDecimal();
                                break;
                case 2:
                                binHexa();
                                break;
                case 3:
                                binChar();
                                break;
                case 4:
                                exit(0);
                default:
                                printf("Opcao Invalida\n");
                                goto inicio;
        }
    }while(1);
}

int binDecimal(void){
    int i;
    char bin[8];
    char espera;
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, decimal);
    espera = getchar();
    if(espera) menu();
}

int binHexa(void){
    int i;
    char bin[8];
    char espera;
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, hexa);
    espera = getchar();
    if(espera) menu();
}

int binChar(void){
    int i;
    char bin[8];
    char espera;
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, caractere);
    espera = getchar();
    if(espera) menu();
}

int main(void){
    menu();
}
