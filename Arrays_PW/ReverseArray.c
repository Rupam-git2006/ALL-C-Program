/*Write a programme to copy the contents of one array 
into another in the reverse  order*/

    /*#include <stdio.h>
    int main(){
    int arr[6]  = {1,2,3,4,5,6};
        int brr[6];
    for (int  i = 1; i <= 6; i++)
    {
        brr[i] =arr[6-i];
    }
    for (int  i = 1; i <= 6; i++)
    {
        printf("%d ",brr[i]);
    }
        return 0;
    }*/




//*******Write a programme to print reverse array withiut using another  array


#include <stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 4;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; 
        j--;
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr);
    
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}