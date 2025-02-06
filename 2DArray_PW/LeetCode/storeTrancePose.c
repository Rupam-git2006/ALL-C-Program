/*WAP to print the trancepose of the matrix entered by the user.*/

#include <stdio.h>

int main(){
     int r ,c;
     printf("Enter THe nnumber of rows and columns : ");
    scanf("%d  %d",&r ,&c);
    printf("Enter the element \n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
         // printf("%d ",arr[j][i]);
         brr[i][j] =arr[j][i];
        }
        printf("\n");
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
         // printf("%d ",arr[j][i]);
         brr[i][j] =arr[j][i];
        }
        printf("\n");
    }
    
    return 0;
}