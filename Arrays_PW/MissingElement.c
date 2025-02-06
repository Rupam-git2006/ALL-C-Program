/*Given an array containing elements from 1 to 100 expect one element  in this range is 
missing .Find the missing element.*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] ={1,2,3,4,5,4,7};
    int x = 1;
    bool flag = false ;//false means not present
    int idx;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i]== x)
        {
            flag = true;
            idx = i;
            break;
        }  
    }
   if(flag == false) {
    printf("%d is not present in the array\n", x);
   }else{
    printf("%d is  present in the array & it's index is %d \n", x, idx);
   }
    return 0;
}






