/*WAP to find reverse a number (EX : 4231=1324) */


#include <stdio.h>
int rev(int n) {
    int count = 0;
    while (n>0)
    {
        count = count*10+n%10;
        n/=10;
    }
 return count;
}   
int main(){
     int n;printf("Enter a no. to find all factor: "); scanf("%d",&n);
    printf("\nThe reverse no of %d is = %d",n,rev(n));
    return 0;
}