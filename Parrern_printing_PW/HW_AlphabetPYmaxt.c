/* Print the given pattern
Number Pyramid Mast
A B C D E F G
A B C   E F G
A B       F G
A           G*/



#include <stdio.h>

int main(){
     int n;printf("Enter Pattren Number: ");scanf("%d",&n);
     int nsp =1;
     int nst = n;
     int A =1;
for (int x = 1; x <=2*n+1; x++)
{
    char ch = (char)(A + 64);
            printf("%c", ch);
            A++;
}
printf("\n");
for (int i = 1; i <=n; i++)
{
    int A =1;
    for (int  j = 1; j <= nst; j++)
    {
        char ch = (char)(A + 64);
            printf("%c", ch);
            A++;
    }
    for (int k = 1; k <=nsp; k++)
    {
        printf(" ");
        A++;
    }
    for (int l = 1; l <=nst; l++)
    {
       char ch = (char)(A + 64);
            printf("%c", ch);
            A++;
    }
    nsp+=2;
    nst--;
    printf("\n");
}

    
    return 0;
}