// #include <stdio.h>
// void greet(){
//     printf("Good Morning\n");
//     printf("How are you ?\n");
// }
// int main(){
//     greet();
//     greet();
//     greet();
//     return 0;
// }




#include <stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void Australia(){
    printf("You are in Australia\n");
    england();
    return;
}
void India(){
    printf("You are in India\n");
    Australia();
    return;
}
int main(){
India();
    return 0;
}