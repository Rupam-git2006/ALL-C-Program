/*Rotate the given array 'arr' by k steps ,where k is non-negative.*/
/*Note : K can be greater than n as well ehere n is the size  of array 'a'*/
/*#include <stdio.h>
void reverse(int arr[] ,int a ,int b){
   for (int i = a,j = b; i < j; i++,j--)
   {
     int temp   = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
   } 
}
int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr,2,4);
    //index 1-4 reverse
     for (int i = 0; i <= 4; i++)
    {
        printf("%d ",arr[i]);
    }
     return 0;
}*/







#include <stdio.h>
void reverse(int arr[] ,int a ,int b){
   for (int i = a,j = b; i < j; i++,j--)
   {
     int temp   = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
   } 
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n= 7;
    int k = 3;
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    //index 1-4 reverse
     for (int i = 0; i <= 6; i++)
    {
        printf("%d ",arr[i]);
    }
     return 0;
}