#include <stdio.h>
#include <math.h>
int main() {
	// Declaring Variables
	double radius = 0.0;
	double area = 0.0;
	double surface_area = 0.0;
	double volume = 0.0;

	printf("Enter the radius: ");
	if (scanf("%lf", &radius) != 1 || radius < 0) {
		printf("Invalid input, please try again!");
		return 1;
	}

	//Calculations
	area = M_PI * radius * radius;
	surface_area = 4 * M_PI * radius * radius;
	volume = (4.0 / 3.0) * (M_PI * pow(radius, 3));

	printf("\n=======Circle Calculator=======");
	printf("\nYour entered radius is %.2lf m", radius);
	printf("\nArea of the circle is %.2lf m^2", area);
	printf("\nSurface area of the sphere is %.2lf m^2", surface_area);
	printf("\nVolume of the sphere is %.2lf m^3\n", volume);
	return 0;
}