/*Write a program with three functions 
1. Good morning function which prints “good morning”. 
2. Good afternoon function which prints “good afternoon”. 
3. Good night function which prints “good night”*/


#include <stdio.h>


void good_morning();
void good_afternoon();
void good_evening();


void good_morning(){
    printf("Good morning\n");
}
void good_afternoon(){
    printf("Good afternoon\n");
}
void good_evening(){
    printf("Good evening\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}