#include <stdio.h>

int main(){
    int arr[6] = {152,8,26,500,9,120};
    int max =arr[0];
    for (int i = 0; i <= 5; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d\n",max);
    
    return 0;
}