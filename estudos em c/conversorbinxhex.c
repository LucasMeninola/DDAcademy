void HexParaBin()
{
    quebra(2);
    printf ("Informe um valor hexadecimal: ");
    PedeHexa();
    quebra(2);
    printf ("O valor informado foi: %s", valor);
}

void PedeNumero()
{
     char c;
     int i;

         i=0;
         do
         {
       c=getch();
           if (isdigit(c)!=0)
           {
          valor[i] = c;
          i++;
          printf ("%c", c);
       }
       else if(c==8&&i)
       {
          valor[i]='\0';
          i--;
          printf("\b \b");
       }
    }while(c!=13);

    valor[i]='\0';
}

void PedeBinario()
{
     char c;
     int i;

         i=0;
         do
         {
       c=getch();
           if (c=='0' || c=='1')
           {
          valor[i] = c;
          i++;
          printf ("%c", c);
       }
       else if(c==8&&i)
       {
          valor[i]='\0';
          i--;
          printf("\b \b");
       }
    }while(c!=13);

    valor[i]='\0';
}
