//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
//earth. Consider g = 9.8m/s2


#include <stdio.h>

    float weight (float  mass);
    float weight (float  mass){
         
        return mass * 9.8;
    }

int main(){
    float mass,force;
    printf("Enter your Body mass:\n");
    scanf("%f",&mass);

    force =weight(mass);
    printf("force of attraction on a body of mass is %.02f\n",force);
    
    return 0;
}