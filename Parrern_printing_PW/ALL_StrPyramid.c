/* Print the given pattern
       *    
      ***  
     ***** 
    *******       */
//   #include <stdio.h>
//    int main(){
//     int n,a=1;
//     printf("Enter pattern number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= a; k++)  //k<=i*2-1
//         {
//             printf("*");
//         }
//         a=a+2;
//         printf("\n");
//     }
//     return 0;
// }





/*print this given pattern
*****
 ***
  *        */
// #include <stdio.h>
// int main(){
//     int n;printf("Enter pattern number: ");scanf("%d", &n);
//     int sp = 0;
//     int a =n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= sp; j++)
//         {
//             printf(" ");
//         }
//         for (int l = 1; l <= (n * 2 - (2 * i - 1)); l++)  ////   l<=a
//         {
//             printf("*");
//         }
//         sp++;
//         a=a-2;
//         printf("\n");
//     }
//    return 0;
// }





/*print this given pattern
*
**
***
****
***
**
*                       */
#include <stdio.h>
int main(){
    int n;printf("Enter pattern number: ");scanf("%d", &n);
    for (int i = 0; i < n; i++){
        if(i<n/2+1){
            for (int j = 0; j <= i; j++){
                printf("*");
            }
            }else{
                for (int k = 1; k <=n-i; k++){
                    printf("*");
                }
              }
              printf("\n");
    }
    return 0;
}

