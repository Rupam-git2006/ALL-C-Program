#include <stdio.h>
int factorial(int n){
	int fact =1;
	int i;
	for( i=1;i<=n;i++){
		fact = fact*i;
	}
	return fact;
}
int kr(int n){
	int t=n,r,sum =0;
	while(n>0){
		r=n%10;
		sum+=factorial(r);
		n=n/10;
	}
	return (t==sum);
}
int main(){
   int n1;printf("Enter:");scanf("%d",&n1);
  if(kr(n1)){
  	printf("yes,It is Krishnomurty no.");
  }else{
  	printf("NO");
  }
    return 0;
}
