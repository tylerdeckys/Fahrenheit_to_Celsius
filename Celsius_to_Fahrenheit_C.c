#include <stdio.h>

/*print Celsius to Fahrenheit table
for celsius = 0,10,...,300 */

main() {
    float fahrenheit, celsius;
    int lower, upper, interval;
    
    lower = 0;
    upper = 300;
    interval = 10;
    
    printf("Celsius\tFahrenheit\n");
    
    celsius = lower;
    while (celsius <=upper) {
        fahrenheit = 9.0*(celsius/5.0)+32.0;
        printf("%3.0f\t\t\t%3.0f\n", celsius, fahrenheit);
        celsius = celsius + interval;
    }
}
