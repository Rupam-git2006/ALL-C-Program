/*WAP to check all primne facotr of a number*/

#include <stdio.h>
int primeFac(int n) {
    // Print the number of 2s that divide n
     while (n%2 == 0)
     {
        printf("%d ",2);
        n/=2;
     }
     // n must be odd at this point, so we can skip one element (i = i + 2)
     for (int i = 3; i <= n; i+=2)
     {
        while(n%i==0){
        printf("%d ",i);
        n = n/i;
     }
     }
     if(n>2){
        printf("%d ",n);
     }
}   
     
int main(){
int n;printf("Enter a no. to find all  Prime factor: "); scanf("%d",&n);
	printf("The prime factors are: %d\n",n);
    primeFac(n);
    return 0;
}

