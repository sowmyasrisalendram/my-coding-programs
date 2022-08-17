
#include <stdio.h>
int main()
{       int fib[100];
        int i,n;
        printf("Enter elements into an array: ");
        scanf("%d",&n);
        fib[0] = 0;
        fib[1] = 1;
            for (i = 0; i < n; i++)
                printf("%3d   %6d\n", i, fib[i]);
}
