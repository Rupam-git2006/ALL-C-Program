#include <stdio.h>

int main(){
    int n,sum= 0;
    printf("Enter the number: "); 
     scanf("%d",&n);
     int count = 0; 
     while (n!=0)
     {
        sum+=n%10;
      //   n = n/10;
         count++; 
     }
     
    printf("sum = %d",sum);
    printf("\nNumber of digits:%d ",count);
    return 0;
}