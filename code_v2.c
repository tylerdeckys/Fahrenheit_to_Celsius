#include <stdio.h>

/*print Fahrenheit to Celsius tavle
for fahrenheit = 0,10,...,300 */

main() {
    float fahrenheit, celsius;
    int lower, upper, interval;
    
    lower = 0;
    upper = 300;
    interval = 10;
    
    printf("Fahrenheit\tCelsius\n");
    
    fahrenheit = lower;
    while (fahrenheit <=upper) {
        celsius = (5.0/9.0) * (fahrenheit-32.0);
        printf("%3.0f\t\t\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + interval;
    }
}
