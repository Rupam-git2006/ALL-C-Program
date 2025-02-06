#include <stdio.h>
#include <string.h>
int main(){
     char str[] = "college Wallah";  
    // char* ptr = &str[0];
    // printf("%p\n",ptr);
    // printf("%p\n",&str[0]);
    // printf("%p\n",str);



    char* ptr = str;
    int i =0;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    



    // char* ptr = "Bodai High School";
    // printf("%s\n",ptr);                                         
    return 0;
}