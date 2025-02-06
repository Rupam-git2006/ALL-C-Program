#include <stdio.h>   


int sum(int* a,int* b){
    *a =6;
    return *a+*b;
}
int main(){
    int X = 1, Y = 6    ;
    printf("sum of 1 and 6 is %d\n",sum(&X , &Y));
    printf(" The value of X is %d", X);
    return 0;
}                                                                                                                       

