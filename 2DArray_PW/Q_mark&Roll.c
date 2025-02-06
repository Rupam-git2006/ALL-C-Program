/*Write a programme to store roll number & marks obtained by  4 
students side by side in a marks.*/

#include <stdio.h>

int main(){
int arr[4][2] = {{1,80},{2,87},{3,77},{4,85}};
printf("Roll   Marks\n");
for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("  %d  ", arr[i][j]);
        }
         printf("\n");
    }
    
    return 0;
}