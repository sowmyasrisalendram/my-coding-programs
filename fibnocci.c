
#include <stdio.h>
int main()
{       int fib[100];
        int i,n;
        printf("Enter elements into an array: ");
        scanf("%d",&n);
        fib[0] = 0;
        fib[1] = 1;
         for(i = 2; i < n; i++)
                fib[i] = fib[i-1] + fib[i-2];
         for (i = 0; i < n; i++)
                printf("%d   %d\n", i, fib[i]);
}
