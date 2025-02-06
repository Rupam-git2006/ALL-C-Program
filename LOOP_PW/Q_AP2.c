//Display this AP- 4,7,10,13,16..upto 'n' times


#include <stdio.h>

int main(){
     int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    // for (int i = 4; i <= 3*n-1; i=i+3)
    // {
    //     printf("%d ", i);
    // }

    
    int a =4;
    for (int  i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a  = a +3;
    }
    
    return 0;
}