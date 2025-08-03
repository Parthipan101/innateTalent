#include <stdio.h>
#define PI 3.14

int main() {
    float radius, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}