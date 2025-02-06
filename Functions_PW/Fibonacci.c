#include <stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }else
    return fib(n-1)+fib(n-2);
}
int main(){
 int n1;printf("Enter:");scanf("%d",&n1);
 for(int i=0;i<=n1;i++){
    printf("%d ",fib(i));
 }
    return 0;
}