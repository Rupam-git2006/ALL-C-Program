//Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check
// if all the three points fall on one straight line.


#include <stdio.h>

int main(){
    double x1, y1, x2, y2, x3, y3;
    printf("Enter x1, y1, x2, y2, x3, y3:\n");
    scanf("%d %d %d %d %d %d ",&x1 , &y1 ,&x2 ,&y2, &x3 ,&y3);
    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("It is a Straight Line");
    }else{
        printf("It is not a Straight");
    }
    
    return 0;
}