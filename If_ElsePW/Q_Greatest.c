// Ques : Take 3 positive integers input and print the greatest of them

#include <stdio.h>

int main()
{
    int a, b, c;
    printf(" Enter three number :\n ");
    scanf("%d %d %d", &a, &b, &c);
    /* if (a > b && a > c)
     {
         printf("%d is greatest number", a);
     }
     else if (b > a && b > c)
     {
         printf("%d is greatest number", b);
     }
     else
     {
         printf("%d is greater number", c);
     }*/

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest number", a);
        }
        else
        {
            printf("%d is greater number", c);
        }
    }
    else
    {
        if (b > c)
            printf("%d is greatest number", b);
        else
            printf("%d is greater number", c);
    }

    return 0;
}