#include <stdio.h>

int main(){
    int arr[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d",&arr[i]);
    }
    for (int i = 5; i >= 1; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}