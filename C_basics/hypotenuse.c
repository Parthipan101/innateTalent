#include <stdio.h>

float squareRoot(float a, float b) {
    float n = a * a + b * b;
    if (n < 0) {
        printf("Error: Negative input for square root.\n");
        return -1; // Indicating an error
    }
    float x = n;
    float y = 1;
    float e = 0.00001;
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b;
    printf("Enter two sides of a right triangle: ");
    scanf("%f %f", &a, &b);

    if (a < 0 || b < 0) {
        printf("sides of triangle is not real.\n");
    } else {
        printf("hypotenuse of %.2f and %.2f is %.5f\n", a, b, squareRoot(a, b));
    }
    return 0;
}