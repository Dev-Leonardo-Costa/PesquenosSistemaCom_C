#include <stdio.h>

int main() {
 int a,b,contador;
 
 printf ("digite 1 numero:");
 scanf("%d",&a);
 printf("digite 2 numero:");
 scanf("%d",&b);
 
 contador = a;
 while(contador <= b)
 {
   printf("%d",contador);
   contador++;
 }
 contador = a + 10;
 while(contador < b)
 {
  printf("%d",contador);
 contador++;
 }
  return 0;
}