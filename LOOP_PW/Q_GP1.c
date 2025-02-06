//Display this GP - 100,50,25....upto'n' terms


#include <stdio.h>

int main(){

    int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    float a = 100;
    for (int i = 1; i <=n; i++)  {
        if(a>0){
        printf("%0.2f ",a);
        a=a/2;
        }
    }
    return 0;
}