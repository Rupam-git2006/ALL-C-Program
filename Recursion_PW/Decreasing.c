#include <stdio.h>
void greeting(int n) {
    if(n==0) return;
    printf("(%d)Good Morning\n",n); 
    greeting(n-1);
    return;
}

int main(){
    int n;printf("Enter a no: "); scanf("%d",&n);
  greeting(n);
    return 0;
} 