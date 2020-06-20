#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void crossOut (char *T, int number, int limit)
{
    int j;
    for (j = 2; j < limit ; j++)
       {
           int i = j * number;
           T [i] = 1;
       }

}
void sieve (char *T[], int limit)
{
   int i;
   for (i = 0; i<limit; i++)
   {
       *T [i] = 0;
   }
   *T[0] = 1; *T[1] = 1;
   for (i = 2; i <= sqrt(limit); i++)
   {
           crossOut(T, i, limit);
       }

}

int main ()
{
   char *ptr;
   int limit, count;
   int sum = 0;
   printf("please enter a limit to find prime numbers:\n");
   scanf("%d", &limit);
   int i = limit;
   while ((getchar())!='\n');
   ptr = (char*)malloc(i * sizeof(int));
   sieve(ptr, limit);
   printf("\n");
   for (count = 0; count < limit; count++)
   {
       if (ptr[count] == 0)
       {
           sum = sum + 1;
           printf("%d\t",count);
           printf("\n%d", sum);
       }
   }

   printf("\n");

   free(ptr);

   return 0;
}
