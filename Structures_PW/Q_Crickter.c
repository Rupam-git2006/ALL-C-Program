// A record contains name of cricketer, his age, number of test matches that he has 
//played and the average runs that he has scored in each test match. Create an array 
//of structure to hold records of 20 such cricketer and then write a program to 
//read these records


#include <stdio.h>
#include <string.h>
int main(){
    typedef struct crickter{
        char firstname[15];
        char lastname[15];
        int age;
        int noOfMatches;
        float average;
    } crickter;
    
    crickter arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter First name: ");
        scanf("%s",arr[i].firstname);
        printf("\nEnter last name: ");
        scanf("%s",arr[i].lastname);
        printf("\nEnter NO of Matches: ");
        scanf("%d",&arr[i].noOfMatches);
        printf("\nEnter age: ");
        scanf("%d",&arr[i].age);
        printf("\nEnter avg: ");
        scanf("%f",&arr[i].average);
       
    }
    printf("\n");
     for (int i = 0; i < 3; i++)
    {
        printf("Name:%s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age: %d\n",arr[i].noOfMatches);
        printf("Number of Matches Played:%d\n",arr[i].age);
        printf("Average:%f\n\n",arr[i].average);
        printf("\n");
    }
    return 0;
}