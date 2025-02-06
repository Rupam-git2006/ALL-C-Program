//2. Write a function to convert Celsius temperature into Fahrenheit.

// #include <stdio.h>

// float CelsiustoFahrenheit(float Celsius ){
//     return (Celsius*9.0/5.0)+32.0;
// }

// int main(){
//     float Celsius, Fahrenheit;   
//     printf("Enter temperature in celsius:");
//     scanf("%f",& Celsius);

//     Fahrenheit=CelsiustoFahrenheit(Celsius);
//     printf("%.2f Celcius is equal to %.2f Fahrenheit\n", Celsius, Fahrenheit);
//     return 0;
// }




#include <stdio.h>
 float c2f(float c);
 float c2f(float c){
    return ((9.0*c)/5.0)+32.0;
 }

int main(){
    float c=100;
    printf("%.2f Celcius is equal to %.2f Fahrenheit:\n",c,c2f(c));
    
    return 0;
}