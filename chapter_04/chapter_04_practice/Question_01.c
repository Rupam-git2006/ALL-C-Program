//Write a program to print multiplication table of a given number n.



#include <stdio.h>

int main(){
    int n;   
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i <= 100; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}