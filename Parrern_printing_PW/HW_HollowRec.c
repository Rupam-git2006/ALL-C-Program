/* Print the given pattern
******   
*    *
*    *
******         */

#include <stdio.h>

int main(){

    int n,m;printf("Enter no. of rows &colomns: ");scanf("%d %d",&n,&m);
    for (int i = 0; i <n; i++)
    {                             
        for (int j = 0; j <m; j++)
        {
           // int a=n/2+1;
            if(i>0 && i<n-1 && j>0 && j<m-1) printf("  ");
            else printf("* ");
        }
        printf("\n");
    }
      
    return 0;
}