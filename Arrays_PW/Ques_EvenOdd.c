/*Find the difference between the sum of elements at even  indices to the sum of element 
at odd indices*/

#include <stdio.h>

int main(){
    int arr [7] = {0,1,2,3,4,5,6};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i <= 6; i++)
    {
        if(i%2 == 0){
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i];
        }
    }
    int res = sumEven - sumOdd;
    printf("%d\n",res);
    return 0;
}