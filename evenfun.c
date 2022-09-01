#include <stdio.h>
int isEven(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isEven(num))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}
