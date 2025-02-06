#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    int greatest = 0;

    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the second number:\n");
    scanf("%d",&num2);
    printf("Enter the third number:\n");
    scanf("%d",&num3);
    printf("Enter the fourth number:\n");
    scanf("%d",&num4);

    if (num1>greatest){
        greatest=num1;
    }
     if (num2>greatest){
        greatest=num2;
    }
     if (num3>greatest){
        greatest=num3;
    }
    if  (num4>greatest){
        greatest=num4;
    }

    printf("The greatest number is %d",greatest);
    return 0;
}