//Ques : Take integer input and print the absolute value of that integer
//Negative, Positive, zero

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
        n = n*(-1);
    }
    printf(" The absolute value of n is =%d",n);
    
    return 0;
}
