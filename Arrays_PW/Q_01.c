/*Given an array of marks  of students,if the mark of any student is less than 35 print 
its roll number.[roll number here referse to the index of the array.] */

#include <stdio.h>

int main(){
    int marks[10] = {75,55,12,35,36,29,30,19,89,17};
    for (int i = 0; i <= 9; i++)
    {
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    
    return 0;
}