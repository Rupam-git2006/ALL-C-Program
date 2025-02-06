// #include <stdio.h> // Corrected include statement

// int main(){
//     in a = 1;
//     float b = 1.4;
//     char c = 'a';
//     printf("Hello World");
//     return 0;
// }
#include <stdio.h>

int main()
{
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}
