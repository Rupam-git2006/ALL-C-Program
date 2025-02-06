/*Palindrome Number Program in C(EX-121   ,, 1 is two time in this number)*/



          
#include <stdio.h>
int palinRev(int n){
    int rev=0;
    while (n>0)
    {
        int digit=n%10;
        rev = rev*10+digit;
        n/=10   ;
    }
    return rev;
}
int palin(int n){
    if(n<0) return 0;
    return n==palinRev(n);
}
int main(){
int n1;printf("Enter a number:");scanf("%d",&n1);
   if(palin(n1)) printf("%d is a palindrome No",n1); 
   else printf("%d is not a palindrome no",n1);
    return 0;
}