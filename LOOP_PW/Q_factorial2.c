// Print the factorials of first ‘n’ numbers



// #include <stdio.h>

// int main(){

//     int prd= 1;
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     for (int  i = 1; i <=n; i++)
//     {
//         prd = prd*i;
//          printf("The factorial of this number:%d! = %d\n",i, prd);
//     }
   
//     return 0;
// }



#include <stdio.h>

int main(){
	int n,count=1;
	scanf("%d",&n);
	while(n>0){
		count= count*n;
		n--;
	}
 printf("%d\n",count);
 return 0;
}