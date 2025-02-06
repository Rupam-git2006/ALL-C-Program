//Display this  AP - 100,97,94......Upto all positive  terms

#include <stdio.h>

int main(){
    int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    int a = 100;
    for (int i = 1; i <= n; i++)
    {
       printf("%d ", a);
       a = a-3;
    }
    
    return 0;
}