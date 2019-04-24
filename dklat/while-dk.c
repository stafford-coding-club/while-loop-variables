#include <stdio.h>
#include <stdlib.h>

int main(void) {

   int i = 1;
   while (i <= 100) {

      int f = 0;

      if (i % 3 == 0) {
         printf("Fizz");
         f += 1;
      }

      if (i % 5 == 0) {
         printf("Buzz");
         f += 1;
      }

      if (f < 1) printf("%d",i);

      printf("\n");

      i += 1;
   }

   return 0;
}