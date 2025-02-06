/*WAP to find  a duplicate element from a given array of integer.*/

#include <stdio.h>

int main(){
    int arr[8] =   {1,2,3,2,2,3,1,4};
    for (int  i = 0; i <= 7; i++)
    {
        for (int j = i+1; j <= 7; j++)
        {
            if (arr[i] == arr[j])   
            {
                printf("%d is Duplicate element.\n", arr[i]);
                break;
            }
        }
  }
     return 0;
}