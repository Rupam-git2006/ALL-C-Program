//5. Write your own version of strcpy function from <string.h>

#include <stdio.h>
void strlen(char str[]) {
    int i =0,count;
    char c= str[i];
    while (c!='\0')             
    {
        /* code */
    }
    
int main(){
    char source[] = "hello";
    char target[38];
    strcpy(target, source);
    
    return 0;
}