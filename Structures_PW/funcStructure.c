#include <stdio.h>
#include <string.h>
 typedef struct{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
void fun(pokemon p){
    printf("%d", p.hp);
   
}
void change(pokemon p){
    p.attack =70;
    p.hp = 50;
    
}
int main(){
   
    pokemon pikachu;
    pikachu.hp =60;
    pikachu.attack =600;
    
    printf("%d\n", pikachu.hp);
    printf("%d", pikachu.attack);
    //fun(pikachu);
    
    return 0;
}