#include <stdio.h>


//ver a pagina 323

void displaybits(unsigned value);

int main(void)
{
    unsigned x;

    printf("Digite o binario: ");
    scanf("%u", &x);

  displaybits( x );
   return 0;
}

void displaybits( unsigned value)
{

    unsigned c;

    unsigned displayMask = 1 << 31;

    printf("%10u = ", value);

    for( "10u = ",value){
     putchar(value & displayMask ? '1':'0');
     value <<= 1;//deslocar a memooria para esquerda

     if ( c % 8 == 0)){
        putchar('');
        }
    }
}
