#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float a;
	printf("Podaj kat w stopniach: ");
	scanf("%f", &a);
	a=a*M_PI/180;
	printf("sin(a) = %f\ncos(a) = %f\ntan(a) = %f", sin(a), cos(a), tan(a));
	return 0;
}
