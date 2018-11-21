#include  <stdio.h>

/*
 * Program which takes in a fahrenheit temperature
 * variable and prints a converted celsiu result.
 *
 * Assumption: Assume input is Fahrenheit degree
 *
 * Input: double "fahrenheit"
 *
 * Output: double "celsius"
 *
 * Algorithm: using a "CONVERTFACTOR" constant we
 * get the celsius conversion result by multiplying
 * the fahrenheit input by the "CONVERTFACTOR"
 * constant and subtracting 32.
 */

int main(void) {
    const double CONVERTFACTOR = 5.0/9.0;
	const double SENTIL = 99999;

    double fahrenheit, celsius;

    scanf("%lf",&fahrenheit);

	while (fahrenheit != SENTIL) {
    	celsius = (fahrenheit - 32.0) * CONVERTFACTOR;
    	printf("%.0f degrees Fahrenheit is %.2f Celsius.\n",
			fahrenheit, celsius);
	
   	    scanf("%lf",&fahrenheit);
	}
    return 0;
} // main
