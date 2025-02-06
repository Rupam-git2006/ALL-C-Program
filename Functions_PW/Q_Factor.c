/*C Program to Display Factors of a Number */ 
#include <stdio.h> 
void printDivisors(int n) 
{ 
	for (int i = 1; i <= n; i++) 
		if (n % i == 0) 
			printf("%d ", i); 
}  
int main() 
{   
    int n;printf("Enter a no. to find all factor: "); scanf("%d",&n);
	printf("The divisors of %d are: ", n); 
	printDivisors(n); 

	return 0; 
}
