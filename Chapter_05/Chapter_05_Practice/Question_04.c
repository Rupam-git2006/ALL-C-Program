//Write a program using recursion to calculate nth element of Fibonacci series.



#include <stdio.h>
  
  int fibonacci(int n) {
    if (n <= 0){
        return 0;
    } else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }

  }
int main(){
    int n,result;
    printf("Enter the position (n) in the Fibonacci sequence: ");
    scanf("%d",&n);

    result = fibonacci(n);
    printf("Fibonacci number at position %d is %d\n", n, result);
    
    return 0;
}