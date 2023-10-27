#include <stdio.h>

void circle(float r) {
    float area_circle = 3.14 * r * r;
    printf("Area of circle: %f\n", area_circle);
}

void square(int side) {
    printf("Area of square: %d\n", side * side);
}

void rectangle(int l, int b) {
    printf("Area of rectangle: %d\n", l * b);
}

void cylinder(int r, int h) {
    printf("Area of cylinder: %f\n", 2 * 3.14 * r * (r + h));
}

int main() {
    circle(2);
    square(3);
    rectangle(3, 4);
    cylinder(2, 3);
    return 0;
}