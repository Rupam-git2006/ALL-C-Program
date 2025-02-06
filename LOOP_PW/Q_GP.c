//Display this GP - 1,2,4,8...n

// #include <stdio.h>
// int main(){
//     int n;
//      printf("Enter a number:\n ");
//     scanf("%d",&n);
//     int a = 1;
//     for (int i = 0; i <=n; i++)  {
//         printf("%d ",a);
//         a=a*2;
//     }
//     return 0;
// }






//Display this GP - 3,12,48,...n


#include <stdio.h>
int main(){
    int n;
     printf("Enter a number:\n ");
    scanf("%d",&n);
    int a = 3;
    for (int i = 0; i <=n; i++)  {
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}