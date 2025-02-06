//Write a program to calculate the factorial of a given number using a for loop. 



#include <stdio.h>

int main(){
    int n,i;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&n);
    unsigned long long factorial =1;//Factorial can be larged,so used unsigned

if(n<0){
    printf("Factorial negative does not exist.\n");
}else{
    for (i = 1;i <= n;i++){
          factorial*=i;
    }  
}
    printf("Factorial of %d!  = %llu\n",n,factorial);
    return 0;
}