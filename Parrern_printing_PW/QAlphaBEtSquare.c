/*Print the given pattern
A B C D
A B C D
A B C D
A B C D*/


#include<stdio.h>
int main(){
 int n;printf("Enter number of rows: ");scanf("%d", &n);
 for (int i = 1; i <=n; i++)
 {int a=1;
    for (int j = 1; j <=n; j++)
    {
        printf("%c ",a+64);
    a++;
    }
    printf("\n");
 }
   return 0;
}