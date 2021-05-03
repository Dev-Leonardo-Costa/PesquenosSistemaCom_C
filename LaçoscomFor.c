#include <stdio.h>

int main(void) {
 int a,b,i,rr;
 float fat=1;
 
 printf("digite o 1 valor >> ");
 scanf("%d",&a);
 printf("digite 2 valor >> ");
 scanf("%d",&b);

 printf("digite um numero >> ");
 scanf("%d",&n);
 
 for(i=1; i<=b; i++)
{ 
rr= rr*a;
}

 for (c = n; c >= 1;c--)
 {
   fat = fat * c;
 }
 printf("%d elevado a %de igual %d",a,b,rr);
 printf( "o fatorial de %d e %f",n,fat );
  return 0;
}