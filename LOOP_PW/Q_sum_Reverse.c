// WAP to print the sum of given number and its reverse



#include <stdio.h>

int main(){
    int n,sum,original;printf("Enter a number : "); 
    scanf("%d",&n);
    int r = 0;
    original = n;
    while (n>0)
    {
      //  r= r*10;
       r=( r*10)+(n%10);
        n = n/10;
    }
    sum =original+r;
    printf("The sum of the given number & its reverse is : %d",sum);
    return 0;
}