/* Print the given pattern
Alphabet Triangle
         A
       A B
     A B C
   A B C D*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter pattern number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int A = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            char ch = (char)(A + 64);
            printf("%c", ch);
            A++;
        }
        printf("\n");
    }

    return 0;
}