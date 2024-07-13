// examples_11-14
#include <stdio.h>
int main()
{
	float degrees, radians;

	printf("Enter an angle in radians: ");
	scanf_s("%f", &radians);
	degrees = 57.2957795 * radians;
	printf("%.2f radians is %.2f degrees.\n", radians, degrees);
	return(0);
}