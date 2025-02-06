#include <stdio.h>

int main(){
    int i = 72,k =67;
    int* j = &i;  //j is a pointer pointing to i
    printf("The address of i is %p and%u\n", i,&i);
    printf("The address of i is %p \n", j);
   printf("The address of i is %p\n", *(&i));
    return 0;
}