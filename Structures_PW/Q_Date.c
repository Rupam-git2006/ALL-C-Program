/*Create a  structure ‘date’ that contains three members namely date, month and year.
 Create 2 structure variables with different dates and now compare the two. If 
the dates are equal then display message as "Equal" otherwise "Unequal".*/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    a.day = 5;
    a.month = 1;
    a.year = 1999;
    
    b.day = 19;
    b.month = 1;
    b.year = 2023;

bool flag= true;
    if(a.day!=b.day) flag = false; 
    if(a.month!=b.month) flag = false; 
    if(a.year!=b.year) flag = false; 

    if(flag == true) printf("The dates are same");
    else printf("The dates are different");
    return 0;
}