#include <stdio.h>

int main()
{
    char s1[] = "Physics Wallah";
    // char *s2 = s1;
    // s1[0] = 'm';
    // printf("%s", s2);


    //deep copy
    char s2[] = "Physics Wallah";
    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s", s2);

    return 0;
}