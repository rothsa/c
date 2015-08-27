#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
    int fahr, celcius;
    int lwer, upper, step;

    lower = 0;    /* lower limit of temp table */
    upper = 300;  /* upper limit */
    step = 20;    /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
