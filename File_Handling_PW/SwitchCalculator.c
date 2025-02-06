#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    
    char ch;
    scanf(" %c", &ch);  // Added a space before %c
    scanf("%d", &b);
    switch (ch) {   
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    
    default:
    printf("Invailed oPERATOR");
        break;
    }
    return 0;
}
}