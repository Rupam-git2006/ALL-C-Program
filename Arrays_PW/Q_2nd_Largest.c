/*Find the second largest element in the given Array*/
#include <stdio.h>
#include <limits.h>

int main(){
    int arr[7] = {945,9465,566,12,745,1235,41};
   // int arr[7] = {1,2,3,4,5,6,7};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i <=6; i++)
    {
        if (arr[i]!=max && smax<arr[i])
        {
            smax = arr[i];
        }
        
    }



//    for (int i = 0; i <= 6; i++)
//    {
//     if(max<arr[i]){
//         smax = max;//smax is now previous max
//         max = arr[i]; //max is now new max
//     }
//     else if (smax<arr[i])
//   {
//         smax = arr[i];
//     }
    
//    }
   
    printf("%d\n",smax);
    
    return 0;
}