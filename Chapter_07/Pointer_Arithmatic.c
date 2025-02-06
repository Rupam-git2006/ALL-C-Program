#include <stdio.h>

int main(){
    /*char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);*/



    int marks [] = {12,35,26,14,10,};
    int* ptr = &marks[0];
    printf("the value of ptr is %u\n",ptr);
    return 0;
}