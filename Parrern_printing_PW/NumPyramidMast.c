/* Print the given pattern
Number Pyramid Mast
        1         
      1 2 1       
    1 2 3 2 1   
  1 2 3 4 3 2 1*/





#include <stdio.h>

int main(){
    int n;
    printf("Enter pattern number: ");
    scanf("%d", &n);
    int nsp =n-1;
    for (int i = 1; i <= n; i++)
    {
        int a=i-1;
        for (int s = 1; s <= nsp; s++)//space er jonno loop
        {
            printf(" ");
        }
        nsp--;
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        for (int k =1; k <= i-1; k++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    
     
    return 0;
}