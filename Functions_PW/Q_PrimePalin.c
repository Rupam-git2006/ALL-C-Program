/*WAP to find first n numbers ahat are both prime and palindromic*/
/*The first 5 prime palindromic numbers are: 2 3 5 7 11 */


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

void findPrimePalindromes(int n) {
    int count = 0, num = 2; // Start checking from the first prime number
    while (count < n) {
        if (isPrime(num) && isPalindrome(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    int n;

    // Taking input from the user
    printf("Enter the number of prime palindromic numbers to find: ");
    scanf("%d", &n);

    printf("The first %d prime palindromic numbers are: ", n);
    findPrimePalindromes(n);

    return 0;
}
