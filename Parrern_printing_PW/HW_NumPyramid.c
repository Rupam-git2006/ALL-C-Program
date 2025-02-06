/* Print the given pattern
Number Pyramid
            1
          1 2 3
        1 2 3 4 5
      1 2 3 4 5 6 7*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter pattern number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", a);
            a++;
        }
        //    a++;
        printf("\n");
    }

    return 0;
}