//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*

Sample Test Cases:

Input 1:

0

Output 1:

Fahrenheit=32

Input 2:

100

Output 2:

Fahrenheit=212

*/

#include <stdio.h>

#include <conio.h>
int main() {

    float Celsius, Fahrenheit;

    printf("Enter temperature in Celsius: ");

    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;

    printf("Fahrenheit=%.0f\n", Fahrenheit);

    getch();

    return 0;

}
