/* Print the given pattern
Number Pyramid Mast
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7                    */




#include <stdio.h>

int main(){
     int n;printf("Enter Pattren Number: ");scanf("%d",&n);
    int nsp =1;
    int nst=n;
    
    for (int x = 1; x <=2*n+1; x++)
    {
        printf("%d", x);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
       for (int k = 1; k <= nsp; k++)
       {
        printf(" ");
        a++;
       }
       for (int l = 1; l <=nst; l++)
       {
       printf("%d",a);
         a++;
       }
       
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}