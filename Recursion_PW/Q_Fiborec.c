//Write a function to calculate the nth fibonacci number using recursion



#include <stdio.h>
int fibo(int n){
    if (n == 1 || n==2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main(){
     int n;printf("Enter a no: "); scanf("%d",&n);
     if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;  // Return a non-zero value to indicate an error
    }                                                                        
    int x = fibo(n);
    printf("Fibonacci number %d is: %d\n", n, x);;
    return 0;
}