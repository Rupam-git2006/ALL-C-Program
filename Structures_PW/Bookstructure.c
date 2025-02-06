#include <stdio.h>

int main(){
    struct Book{
        char name[50];
        int noOfPages;
        float price;
    } a,b,c;
    struct Book d;

    a.noOfPages = 110;
    a.price =452.3;
    strcpy(a.name,"Secret Seven");
    return 0;
}