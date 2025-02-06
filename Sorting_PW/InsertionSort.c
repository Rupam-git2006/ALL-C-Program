#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for (int i = 1; i <= n-1; i++)
    {
        printf("%d \n",arr[i]);
        int j=i;
        while (j>=1 && arr[j]<arr[j-1]) 
        {
            int swap = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = swap;
            j--;
            printf("%d ",arr[j]);
        }
        
    }

    return 0;
}
    