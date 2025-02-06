//Quick Quiz: Use the library function to calculate the area of a square with side a.



#include <stdio.h>
#include <math.h>
int main(){
    int a,area;

    printf("Enter the side length of the square: ");
    scanf("%d",&a );

    area  = a*a;
    printf("The area of the square is: %f\n",pow(a,2));
    return 0;
}