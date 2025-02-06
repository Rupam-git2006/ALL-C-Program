/**      *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *         */




// #include<stdio.h>
// int main(){
// int n; printf("Enter pattern: "); scanf("%d",&n);
//     int sp1=n*2-1;
//     int str1 =1;
//     int sp2 =1;
//     int str2=n;
//    for(int i =1;i<=n;i++){
//     	for(int j=1;j<=str1;j++){
//     		printf("*");
// 		}
// 		for(int k=1;k<=sp1;k++){
// 			printf(" ");
// 		}
// 		for(int l=1;l<=str1;l++){
// 			printf("*");
// 		}
// 		str1++;
// 		sp1-=2;
// 		printf("\n");
// }
// 	for (int x = 1; x <=2*n+1; x++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     for (int x = 1; x <=2*n+1; x++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     for(int x=1;x<=n;x++){
//     	for(int y=1;y<=str2;y++){
//     		printf("*");
// 		}
// 		for(int z=1;z<=sp2;z++){
// 			printf(" ");
// 		}
// 		for(int w=1;w<=str2;w++){
// 			printf("*");
// 		}
// 		printf("\n");
// 		str2--;
// 		sp2+=2;
// 	}
//   return 0 ;
//  }





#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows(even number recommended) : ");
    scanf("%d",&n);
    int nsp = n-2;
    int nst = 1;
    for(int i=0; i<n; i++) {
        if(i==n/2) {
            nst++;
            nsp-=2;
        }
        for(int j=0; j<nst; j++) {
            printf("*");
        }
        for(int j=0; j<nsp; j++) {
            printf(" ");
        }
        
        for(int j=0; j<nst; j++) {
            printf("*");
        }
        if(i<=n/2-2) {
            nst++;
            nsp-=2;
        }else {
            nst--;
            nsp+=2;
        }
        printf("\n");
    }
    return 0;
}