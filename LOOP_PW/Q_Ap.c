//Display this AP - 1,3,5,,7......n

#include <stdio.h>

int main(){
    int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    for (int i = 1; i <= (2*n-1)/2; i=i+2)
    {
        printf("%d ", i);
    }


    /*for (int i = 1; i <= 2*n-1; i=i+2)
    {
        printf("%d ", i);
    }*/
    
    
    return 0;
}