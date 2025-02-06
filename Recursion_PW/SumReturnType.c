//print sum from 1 to n



#include <stdio.h>
int factorial(int n) {
    if(n==1 || n==0) return 1;
    return n+factorial(n-1);  
}
int main(){
    int n;printf("Enter a no: "); scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n", fact);
    return 0;
}