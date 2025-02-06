//. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum_natural(int n) ;
int sum_natural(int n) {
    if (n==1){
        return 1;
    }
    //sum(n) =1+ 2 + 3+...+n-1+n
    return sum_natural(n-1) + n;
}
int main(){

    printf("The  sum of the first 5 natural numbers is %d\n",sum_natural(5));
    return 0;
}