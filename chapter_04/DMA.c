#include <stdio.h>

int main(){
    int a= sizeof(int);
    printf("Size of int is:%d\n",a);
    int c= sizeof(char);
    printf("Size of char is:%d\n",c);
    char ch= sizeof(char);
    printf("%c\n",ch);
    int f= sizeof(float);
    printf("Size of float is :%d\n",f);
    int d= sizeof(double);
    printf("Size of double is:%d\n",d);
    return 0;
}