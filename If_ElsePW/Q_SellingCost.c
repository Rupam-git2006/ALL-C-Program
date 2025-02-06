/* Ques : If cost price and selling price of an item is input through the keyboard,
 write a program to determine whether the seller has made profit or incurred loss.
  Also determine how much profit he made or loss he incurred. */

 

#include <stdio.h>

int main(){
    int cp;
    printf("Enter cost Price: ");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling Price: ");
    scanf("%d",&sp);
    if (sp>cp) 
    {
        printf("Profit");
    }
     if (cp>sp)
    {
        printf("loss");                                                         
    }
    if(sp==cp){
    printf("No Profit ,No loss");}
    return 0;
}