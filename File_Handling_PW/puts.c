#include <stdio.h>

int main(){
    FILE* ptr = fopen("cw.txt","w");
    char str[] = "Placement lagegi ahai se";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}