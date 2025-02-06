// //Write a program to check whether a given number is prime or not using loops


// #include <stdio.h>

// int main() {
//     int n, i, isPrime = 1;

//     // Prompt the user to enter a number
//     printf("Enter a number to check if it is prime: ");
//     scanf("%d", &n);

//     // Prime numbers are greater than 1
//     if (n <= 1) {
//         isPrime = 0;
//     } else {
//         // Loop from 2 to sqrt(n) to check for factors
//         for (i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 isPrime = 0; // Found a factor, so it's not prime
//                 break;
//             }
//         }
//     }

//     // Output the result
//     if (isPrime) {
//         printf("%d is a prime number.\n", n);
//     } else {
//         printf("%d is not a prime number.\n", n);
//     }

//     return 0;
// }













// C Program to check for prime number using Simple Trial
// Division
// C Program to Check if a Number is Prime using Brute Force
// Method
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int N) {
  
    // If number is less than/equal to 1, it is not prime
    if (N <= 1) {
        return false;
    }

    // Check for divisors from 2 to N-1
    for (int i = 2; i < N; i++) {
      
        // If N is divisible by any number in this range, it
        // is not prime
        if (N % i == 0) {
            return false;
        }
    }

    // If no divisors are found, it is prime
    return true;
}

// Driver code
int main() {
    int N = 29;
    printf("Is %d prime? ", N);

    if (isPrime(N)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}

