#include <stdio.h>

int main(){
    /*Quick Quiz: Write a program to find grade of a student given his marks based on below: 
    90 – 100 => A 
    80 – 90 => B 
    70 – 80 => C 
    60 – 70 => D 
    50 – 60 => E 
    <50        => F*/
    

    char grade;
    int marks = 96;
    if(marks<=100 && marks>=90){
        grade ='A';
        printf("you obtained grade A");
    }
    else if(marks<=90 && marks>=80){
        grade ='B';
        printf("you obtained grade B");
    }
    else if(marks<=80 && marks>=70){
        grade ='C';
        printf("you obtained grade C");
    }
    else if(marks<=70 && marks>=60){
        grade ='D';
        printf("you obtained grade D");
    }
    else if(marks<=60 && marks>=50){
        grade ='E';
        printf("you obtained grade E");
    }
    else if(marks<50){
        grade ='F';
        printf("you obtained grade F");
    }
    
    return 0;
}