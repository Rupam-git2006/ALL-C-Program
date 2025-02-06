/*Find the unique  number in a given array where all the element are being
 repeated twice with one value being unique.*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10] = {1,2,3,4,6,7,7,1,6,5};
    for (int  i = 0; i <= 9; i++)
    {
        bool flag = false;
        for (int j = i+1; j <= 9; j++)
        {
            if (arr[i] == arr[j])   
            {
                flag = true;
            }
        }
        if (flag == false)
        {
          printf("%d ",arr[i]);
          break;
        }
        
  }
     return 0;
}