/*25^2=625....,25 is an Automorphic Number*/




#include <stdio.h>
int am(int n){
    int sqr = n*n;
    while (n>0)
    {
        if(n%10 != sqr%10){
            return 0;
        }
        n/=10;
        sqr /= 10;
    }
    return 1 ;   
}
int main(){
     int n1;printf("Enter:");scanf("%d",&n1);
    if(am(n1)){printf("%d is Automorphic.",n1);}
    else{printf("%d is not Automorphic.",n1);}
    return 0;
}