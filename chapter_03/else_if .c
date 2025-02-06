#include <stdio.h>

int main(){
    int age = 5;
    
    if (age>60){
        printf("You can drive and you are a senior citizen.\n");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else if(age >18){
        printf("You can drive");
    }
    else {
        printf("You can not drive");
    }
    return 0;
}