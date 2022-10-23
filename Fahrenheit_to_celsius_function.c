#include <stdio.h>
// fahrenheit to celsius table using a function

int main (){

fahrToC(300, 10);    

return 0;
}

int fahrToC(int fahr, int interval)
{
    int f;
    
    for (f = fahr; f >= 0; f = f - interval)
        printf("%3d \t %6.1f\n", f, (5.0/9.0)*(f-32)); 
        
return 0;
}
