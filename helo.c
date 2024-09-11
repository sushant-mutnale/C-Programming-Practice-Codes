#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateArea(float length, float width)
{
	return length * width;
}

// Function to calculate the perimeter of a rectangle
float calculatePerimeter(float length, float width)
{
	return 2 * (length + width);
}

int main()
{
	float length, width;

	printf("Enter length of the rectangle: ");
	scanf("%f", &length);
	printf("Enter width of the rectangle: ");
	scanf("%f", &width);

	float area = calculateArea(length, width);
	float perimeter = calculatePerimeter(length, width);

	printf("Area of the rectangle: %.2f\n", area);
	printf("Perimeter of the rectangle: %.2f\n", perimeter);

	return 0;
}
