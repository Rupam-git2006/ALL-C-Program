/*Find the total number of pairs in the Array
whose sum is equal to the  given value X.*/

#include <stdio.h>

int main(){
    int arr[8] = {0,1,2,3,4,5,6,7};
    int totalpairs = 0;
    int x = 10;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i+1; j <= 7; j++)
        {
            if (arr[i]+arr[j] == x)
            {
                totalpairs++;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
            
        }
        
    }
    printf("Total pairs: %d\n", totalpairs);
    
    return 0;
}