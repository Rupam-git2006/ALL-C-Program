/*WAP to check neon number (EX- 9 is a Neon number 9*9=81,8+1=9)*/


#include <stdio.h>
int fib(int num){
	int squre  = num*num;
	int digit;
	int sum = 0;
	int n = squre;
	while(n!=0){
	digit=n%10;
	sum = sum+digit;
	n=n/10;}
	if(sum == num){
		return 1; 
	}else
	return 0;
}
int main(){
 int n1;printf("Enter a number:");scanf("%d",&n1);
 if(fib(n1) == 1) printf("%d is a Neon number",n1);
 else printf("%d is not a Neon number",n1);
    return 0;
}