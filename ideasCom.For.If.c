#include <stdio.h>

int main(void) {
   int n1,n2,extremos;
 
  printf("informe primeiro numero:");
   scanf("%d",&n1);
  printf("informe segundo numero:");
  scanf("%d",&n2);
 
  for (extremos = n1; extremos <= n2; extremos++)
  {
   if (extremos%2==0){
    printf("\n%d",extremos);
   }
  }
  return 0;
}