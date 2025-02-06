/*Given an array containing elements from 1 to 100 expect one element  in this range is 
missing .Find the missing element.*/
#include <stdio.h>

int main(){
    int arr[7] ={1,2,3,4,5,4,7};
    int x ;
    printf("Enter the number to find element:");
    scanf("%d",&x);
   // bool flag = false ;//false means not present
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i]== x)
        {
            printf("%d is present in the array & it's index is %d", x, i);
          //  break;
        }else{
            printf("%d is not present in the array ", x);
           // break;
           continue;
        }
        
    }
    
    return 0;
}