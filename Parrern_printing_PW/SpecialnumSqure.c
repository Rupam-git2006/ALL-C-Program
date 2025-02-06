/* Print the given pattern
Number Pyramid Mast
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4              */





#include <stdio.h>

int main(){
    int n; printf("Enter pattern:"); scanf("%d",&n); 
    int min = 0;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int J = 1; J <= 2*n-1; J++)
        {
            int a = i;
            if (i>n)
            {
               a =2*n-i;
            }
            
            int b =J;
            if (b>n)
            {
               b = 2*n-J;
            }
            
            if(a<b) min =a;
            else min = b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    
    
    return 0;
}