// Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6... upto ‘n’




#include <stdio.h>

int main(){
     int n,sum= 0;
    printf("Enter the number: "); 
     scanf("%d",&n);
     //1-2+3-4+5-6.....n
     //odd numbers--->add
     //even numbers-->subtract
    //  for (int i = 1; i <=n; i++)    {
    //     if (i%2!=0) sum = sum + i;
    //     else sum = sum -i;
    //  }



    if(n%2==0) {
        sum = -n/2;
    }else{
        sum = -n/2+n;
    }
     printf("The sum is: %d",sum);
    
    return 0;
}