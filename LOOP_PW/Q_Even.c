// WAP to print sum of all the even digits of a given number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum1 = 0;
    int sum2 = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            sum1 += n % 10;
        }else if (n%2!=0)
        {
            sum2 += n % 10;
        }
         n = n / 10;
    }
    printf("Sum of all even & odd digits: %d & %d\n", sum1,sum2);
    return 0;
}