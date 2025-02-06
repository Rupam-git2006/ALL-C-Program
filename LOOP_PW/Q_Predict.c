#include <stdio.h>

int main(){
    // int x =4,y,z;
    // y = --x;
    // z = x--;
    // printf("x: %d, y: %d, z: %d",x,y,z);




    // int x=4,y=3,z;
    // z = x-- -y;
    // printf("x: %d, y: %d, z: %d",x,y,z);



    // while ('a'<'b') {
    //     printf("malayalam is a palindrome");  }
    



    int x =4,y = 0,z;
    while (x>=0)    {
        x--;
        y++;
        if (x == y)
       continue;
       else
       printf("\n %d %d",x,y);
       x--;
       y++;    }
    
    return 0;
}