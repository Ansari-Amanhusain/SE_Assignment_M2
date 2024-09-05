//W A P to Convert temperature Fahrenheit to Celsius...
#include <stdio.h>

int main() 
{
    float fahrenheit, celsius;

    
    printf("\n\n\tEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("\n\n\t----------------Convert Fahreheit to Celsius---------------------");
    printf("\n\n\tTemperature in Celsius: %.2f\n", celsius);

    return 0;
}

