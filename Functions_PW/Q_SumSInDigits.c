/*WAP to find the sum of digits of a number until the sum becomes a single digits using 
while loop(Enter a no.:9875,,,, the sum of single digit:2)*/


#include <stdio.h>
int sum(int s){
    int sm = 0;
    if(s<10) return s;
    else{
        while (s>0)
        {
            sm= sm+(s%10);
            s/=10;
        }
        return sum(sm);
    }
}
int main(){
    int n,s=0;printf("Enter a no.:");scanf("%d",&n);
    while (n>0)
    {
        s=s+(n%10);
        n/=10;
    }
    printf("Sum of digits untilsingle digit:%d\n",sum(s));
    return 0;
}