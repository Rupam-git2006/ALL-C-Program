//Ques  : WAP to check if a number is prime or not.


#include <stdio.h>

int main(){
    int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    int a = 0;
    for (int i = 2; i < n-1; i++)
    {
        if (n%i == 0)
        {
            a =1;
            break;
        }
        
    }
    if (n==1)printf("1 is neither prime nor composite\n");
   else if(a==0) printf("The given number is prime\n");
    else printf("The given number is composite\n");
    return 0;
}