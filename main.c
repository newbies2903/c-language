#include <stdio.h>
#include <stdlib.h>


int perfect (int n)
{
    int sum = 0;
    do{
    for (int i =1; i < n; i++)
        {
           if (n%i == 0)
            sum= sum + i;
        }
          if (sum == n)
            {
              printf("The perfect number is: %d\n",n);
              return 1;
            }
          if (sum!=n)
          {
              return 0;
          }
            }while (1);

}
int main ()
{
    int n, result, per;
    printf("\n Plese enter any integer \n");
    scanf("%d", &n);
    result = perfect(n);
        int j;
        for (int j =1; j <= n; j++)
        per= perfect(j);
        if (per== j)
            printf("%d", j);


    return 0;
}
