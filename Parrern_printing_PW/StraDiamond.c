/* Print the given pattern
       *     
      ***   
     ***** 
    *******  
     *****   
      ***
       *             */






// #include <stdio.h>

// int main(){
//     int n;printf("Enter Pattren Number: ");scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int  k = 1; k <=2*i-1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = n-1; i >=1; i--)
//     {
//         for (int j = n-i; j >=1; j--)
//         {
//             printf(" ");
//         }
//         for (int  k = 2*i-1; k >=1; k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//      return 0;
// }








#include <stdio.h>

int main(){
    int n;printf("Enter Pattren Number: ");scanf("%d",&n);
    int nsp =n/2;
    int nst = 1;
    int ml =n/2+1;
    for (int i = 1; i <=n; i++)
    {
        for (int i = 1; i <=nsp; i++)
        {
            printf(" ");
        }
        for (int k = 1; k <=nst; k++)
        {
           printf("*");
        }
       if(i<ml){
        nsp--;
        nst+=2;
       }
       else{
        nsp++;
        nst-=2;
       }
        printf("\n");
    }
    
    return 0;
}