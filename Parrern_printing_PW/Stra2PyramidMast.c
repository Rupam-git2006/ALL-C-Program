/* Print the given pattern
Number Pyramid Mast
*******
*** ***
**   **
*     *                  */




#include <stdio.h>

int main(){
    int n;printf("Enter Pattren Number: ");scanf("%d",&n);
    int nsp =1;
    int nst=n;
    for (int x = 1; x <=2*n+1; x++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
       for (int k = 1; k <= nsp; k++)
       {
        printf(" ");
       }
       for (int l = 1; l <=nst; l++)
       {
       printf("*");
       }
       
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    
    return 0;
}