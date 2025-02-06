#include <stdio.h>

int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;
    
    legendarypokemon mewto;
    strcpy(mewto.ability,"Pressure");
    mewto.normal.hp = 150;
    mewto.normal.speed = 10;
    strcpy(mewto.normal.name,"Mewto");
    mewto.normal.attack =180;
    return 0;
}