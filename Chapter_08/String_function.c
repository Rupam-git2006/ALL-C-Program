#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    printf("%d", strlen(st));
    char source[] = "harry";
    char target[30];
    strcpy(target, st);
    printf("%s %s", source, target);
    return 0;

}