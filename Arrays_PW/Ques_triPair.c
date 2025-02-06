/*Count the number of triplets whose sum is equal to given value  X*/

#include <stdio.h>

int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int totalpairs = 0;
    int x ;
    printf("Enter the sum value to find : ");
    scanf("%d",&x);
    for (int i = 0; i <= 11; i++)
    {
         for (int j = i+1; j <= 11; j++)
         {
            for (int k = j+1; k <= 11; k++)
            {
                if (arr[i]+arr[j]+arr[k] == x)
                {
                    totalpairs++;
                    printf("(%d, %d, %d)\n",arr[i],arr[j],arr[k]);
                }   
            }  
         }
    }
    printf("Total pairs founded: %d\n", totalpairs);
    
    return 0;
}