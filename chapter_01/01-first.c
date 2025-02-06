// #include <stdio.h> // Corrected include statement

// int main(){
    // int a; //variable declaration
    // a= 6; //variable initialization
  // printf("%d",a);


//    int week;
//     printf("Enter week number: ");
//     scanf("%d",&week);
//     switch (week){
//         case 1:
//             printf("Monday\n");
//             break;
//         case 2:
//             printf("Tuesday\n");
//             break;
//         case 3:
//             printf("Wednesday\n");
//             break;
//         case 4:
//             printf("Thursday\n");
//             break;
//         case 5:
//             printf("Friday\n");
//             break;
//         case 6:
//             printf("Saturday\n");
//             break;
//         case 7:
//             printf("Sunday\n");
//             break;
//         default:
//             printf("Invalid input! Please enter a number between 1 and 7.\n");
//             break;
// 	}





// int n;
// printf("Enter:");
// scanf("%d",&n);
// switch (n%2 == 0)
// {
// case 1:
//     printf("%d is even",n);
//     break;
// case 0:
// printf("%d is odd",n);
// break;
// default:printf("Invalid input! Please enter a number between 1 and");
//     break;
// }




//     char ch;
//    printf("Enter a character: ");
//     scanf("%c", &ch);
//       switch (ch) {
//          case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("%c is a vowel.\n", ch);
//             break;
//       default:
//             if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//                 printf("%c is a consonant.\n", ch);
//             else
//                 printf("%c is not a letter.\n", ch);
//             break;
//     }





// int n;
// printf("Enter:");
// scanf("%d",&n);
// (n%2 == 0)? (printf("%d is even",n)): (printf("%d is odd",n));





// int a = 12,b = 25;
// printf("output = %d\n",a & b);
// printf("output = %d\n",a | b);
// printf("output = %d\n",a ^ b);





// return 0;

// }

 








#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char *str = argv[1];
    int result = isPalindrome(str);

    if (result == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}


