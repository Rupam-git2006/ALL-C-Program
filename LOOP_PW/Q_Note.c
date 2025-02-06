/*Consider a currency system in which there are notes of six
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a
sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs. N*/




#include <stdio.h>

int main(){
    int amount,tthou,fhun,thun,hun,fiv,tw,ten,five,two,one,total;
    printf("Enter the amount:");
    scanf("%d",&amount);
    tthou= amount/2000;
    amount=amount%2000;
    fhun= amount/500;
    amount=amount%500;
    thun= amount/200;
    amount=amount%200;
    hun= amount/100;
    amount=amount%100;
    fiv=amount/50;
    amount=amount%50;
    tw= amount/20;
    amount=amount%20;
    ten= amount/10;
    amount= amount%10;
    five=amount/5;
    amount=amount%5;
    two=amount/2;
    amount=amount%2;
    one = amount/1;
    amount=amount%1;
    total=tthou+fhun+thun+hun+fiv+tw+ten+five+two+one;
    printf("Smallest number of notes:%d\n",total);
    return 0;
}






// #include <stdio.h>

// int main() {
//     int n, a = 1, count = 0, arr[10];
//     printf("Enter the prize: ");
//     scanf("%d", &n);

//     // Calculate the number of digits
//     int temp = n;
//     while (temp > 0) {
//         count++;
//         temp /= 10;
//     }

//     // Decompose the number into place values
//     temp = n;
//     for (int i = 0; i < count; i++) {
//         int rem = temp % 10;
//         arr[count - 1 - i] = rem * a;
//         a *= 10;
//         temp /= 10;
//     }

//     // Print the results
//     for (int i = 0; i < count; i++) {
//         printf("one %d rupees\t", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
