#include <stdio.h>

// int main(){

    //Function prototypes
    int sum(int , int);

    int sum(int X , int Y)
    {
        printf("The sum is %d\n",X+Y);
        return X+Y;
    }

    int main(){
        int a = 1;
        int b = 2;

        sum(a,b);

        int a1 = 4;
        int b1 =47;
        sum(a1,b1);

        return 0;
    }
    
