#include <stdio.h>

int main(void) {
int cont;
float base,altura,areas;
 
 for(cont = 1;cont <=4; cont++)
 printf("informe a base:");
 scanf("%f",&base);
 printf("informe a altura:");
 scanf("%f",&altura);
  
 areas =( base * altura) / 2;
 printf("a area é:%f",areas);
  return 0;
}