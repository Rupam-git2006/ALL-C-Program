/*C Program to Calculate the Average of All Elements of an Array*/


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    average = sum / n;

    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
