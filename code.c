#include <stdio.h>

/*print Fahrenheit to Celsius tavle
for fahrenheit = 0,10,...,300 */

main() {
    int fahrenheit, celsius;
    int lower, upper, interval;
    
    lower = 0;
    upper = 300;
    interval = 10;
    
    fahrenheit = lower;
    while (fahrenheit <=upper) {
        celsius = 5 * (fahrenheit-32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + interval;
    }
}
