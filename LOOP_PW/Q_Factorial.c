// Print the factorial of a given number ‘n’


#include <stdio.h>

int main(){
    int prd= 1;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int  i = 1; i <=n; i++)
    {
        prd = prd*i;
    }
    printf("The factorial of this number:\n%d! = %d",n, prd);
    return 0;
}