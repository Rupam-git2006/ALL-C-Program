//Print the table of 19.

/*#include <stdio.h>
int main(){
    int i,res;
    printf("Table of 19 : \n");
    // for ( i = 1; i <= 10 ; i++)
    // {
    //     res = 19*i;
        
    //     printf("\n 19 x %d = %d ",i, res);
    // }
    
     for(i = 19; i <= 190; i+=19) printf("%d\n",i);
    return 0;
}*/





//Print the table of 'n' .Here 'n' is a integer which user will input

#include <stdio.h>
int main(){
    int i,res,n;
    printf("Enter a number:\n ");
    scanf("%d",&n);
    printf("Table of %d : \n",n);
    for ( i = 1; i <=10 ; i++) {
        res = i*n;
        printf("\n %d x %d = %d ",n,i,res);
    }
    return 0;
}