/* Print the given pattern
1 
A B 
1 2 3  
A B C D
1 2 3 4 5*/

#include <stdio.h>

int main(){
 int n;printf("Enter number of rows: "); scanf("%d", &n);
 for (int i = 1; i <=n; i++){
    int a =1;
    if (i%2!=0) {
        for (int j = 1; j <=i; j++){
            printf("%d ",j);
        }
    }else{
        for (int j = 1; j <=i; j++){
            printf("%c ",a+64);
            a++;
        }
     }
    printf("\n");
 }
   return 0;
}

