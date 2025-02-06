// Write a program to given to change the nxn matrix to its transpose


#include <stdio.h>

int main(){
     int n;
     printf("Enter THe number of rows/columns : ");
    scanf("%d",&n);
    printf("Enter the element \n");
    int arr[n][n];//n*n total element
    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)//(int j =0; j <= i)
        {
           //swap arr[i][j] and arr[i][j]
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}