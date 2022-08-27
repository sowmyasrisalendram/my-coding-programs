#include <stdio.h> 
#include <string.h> 
 
int main()
 { 
    char st[]="abcd", ch; 
    scanf("%d",&ch);
    int l = strlen(st), i, j, k, count = 0; 
     
    for (i = 0; i < l; i++)
	 { 
        for (j = 0; j < l-i; j++) 
		{ 
            for (k = j; k < j+i+1; k++) 
			{ 
                printf("%c", st[k]); 
            } 
            printf("\n"); 
        } 
    } 
    return 0; 
}
