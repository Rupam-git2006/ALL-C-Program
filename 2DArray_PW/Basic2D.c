/*#include <stdio.h>
int main(){
    //12
    //34
    int arr[2][2] = {{1,2},{3,4}};
    //arr[0][0] =1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
 for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
         printf("\n");
    }
    return 0;
}*/





 
#include <stdio.h>

int main(){
     int r;
    printf("Enter the number  of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the column : ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
   // printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
         printf("\n");

    }
   
    
    return 0;
}