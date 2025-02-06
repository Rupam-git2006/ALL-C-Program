/* Print the given pattern
A 
A B 
A B C  
A B C D*/


#include <stdio.h>

int main(){
    int n;printf("Enter pattern number: ");scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {int a=1;
        for (int j = 1; j <=i; j++)
        {
            char ch =(char)(a+64);
           printf("%c ",ch); 
            a++;
        }
        printf("\n");
    }
    
    
    return 0;
}