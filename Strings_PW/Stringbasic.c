#include <stdio.h>

int main(){
    // char arr[5] = {'a', 'b', 'c', 'd'};
    // printf("%d\n", arr[0]);
    // char ch = '9';
    // char ch = '\0';//null chracter
    // int x  = (int)ch;
    // printf("%d", x);

    // char arr[] = {'H', 'e', 'l', 'l','o','\0'};
    // int i = 0;
    // while (arr[i] != '\0')  {
    //    printf("%c", arr[i]);
    //    i++;
    // }
    



    // char arr[] = "hello world\0";
    // int i = 0;
    // while (i<5)
    // { printf("%c", arr[i]);
    //     i++;}
    // while (arr[i]!='\0')        
    // {
    //     printf("%c", arr[i]);
    //     i++;
    // }
    



    // char str[20] = "CollegeWallah";
    // str[1] = 98;
    // int i = 0;
    // while (str[i]!='\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }
    



    // char  str[] = "College Wallah is best";
    // //printf("%s", str);
    // puts(str);


    char  str[40];
   // scanf("%s", str);  //only the first word  is considered
   //gets(str); //all the words are considered
   scanf("%[^\n]s", str); 
    printf("Your Input is: %s", str);
    return 0;
}