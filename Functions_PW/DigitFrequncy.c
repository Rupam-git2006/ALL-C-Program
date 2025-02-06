/*WAP using c to count the frequency of each digit in a number;
Enter a number: 112233
Digit frequencies:
Digit 1: 2 times
Digit 2: 2 times
Digit 3: 2 times
*/




#include <stdio.h>

int main() {
    int number, digit;
    int frequency[10] = {0};  // Initialize an array to store frequencies of digits 0-9

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit
    while (number != 0) {
        digit = number % 10;        // Get the last digit
        frequency[digit]++;         // Increase the count for this digit
        number /= 10;               // Remove the last digit
    }

    // Display the frequency of each digit
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
