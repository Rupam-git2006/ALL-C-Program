//Ques : Take 3 numbers input and tell if they can be the sides of a triangle



#include <stdio.h>
int main(){
    int a, b, c;
    printf(" Enter three number :\n ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("Valid Angle \n ");
    }
    else
    {
        printf("invalid angle");
    }
    return 0;
}                                  