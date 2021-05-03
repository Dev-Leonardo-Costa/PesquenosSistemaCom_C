  #include <stdio.h>
  int main(void) 
{ 
      
 float saldo=1000,valor;
 int operacao = 1,menu=5;

 printf("\n***olá Camila Colares bem vinda ao nosso banco***\n\n");
 while (menu==5)
{  
  printf(">>  digite (1) para saque.\n>>");
  printf("  digite (2) para deposito.\n>> ");
  printf(" digite (3) para transferência.\n");
  scanf("%d",&operacao);

 switch(operacao)
{ 
 case 1:
 printf("digite o valor desejado para saque >> R$");
 scanf("%f",&valor);
 saldo = saldo - valor;
 printf("saldo atual >> R$%.2f\n",saldo);
 break;
 
 case 2:
 printf ("digite o valor desejado para deposito >> R$");
 scanf("%f",&valor);
 saldo = saldo + valor;
 printf("saldo atual >> R$%.2f\n",saldo);
 break;
 
 case 3:
 printf("digite o valor desejado para transferência >> R$");
 scanf("%f",&valor);
 saldo = saldo - valor;
 printf("saldo atual >> R$%.2f\n",saldo);
 break;
}
 if (saldo < 0)
{
 printf(" >> saldo insuficiente <<\n");
} 
 printf("para volta ao menu digite >> (5) se nao digite >> (6) para sair\n");  
 scanf("%d",&menu);
}
 printf("##agradecemos camila colares pelo seus ensinos##");
 
  return 0;
}