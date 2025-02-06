//WAP to find the LCM of two numbers using while loop


#include <stdio.h>
int lcm(int x, int y){
    int max =(x>y?x:y);
    while (1)
    {
        if(max%x == 0 && max%y == 0){
            printf("The LCM of %d & %d is : %d\n",x,y,max);
            break;
        }
        ++max;
    }
    return max;
}
int main(){
    int n,m;printf("Enter two number to find LCM:");
    scanf("%d %d",&n,&m);
    lcm(n,m);
    return 0;
}