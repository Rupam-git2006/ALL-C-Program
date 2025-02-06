//1. Write a program using function to find average of three numbers.


#include <stdio.h>

//float average(int a ,int b ,int c);

float average(int a ,int b ,int c){
    return (a+b+c)/3.0;
}


int main(){
     int a,b,c;
     printf("Enter first number: \n"  );
    scanf("%d", & a);
    printf("Enter second number:  \n" );
    scanf("%d", & b);
    printf("Enter thired number: \n" );
    scanf("%d", & c);

printf("The average number is:%f \n",average(a,b,c) );

    return 0;
}