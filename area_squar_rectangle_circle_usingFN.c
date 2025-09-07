
#include<stdio.h>

float squareArea(float side);
float rectangleArea(float length, float width);
float circleArea(float radius);

int main() {
    float side, length, width, radius;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    printf("Area of square: %.2f\n", squareArea(side));

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of rectangle: %.2f\n", rectangleArea(length, width));

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of circle: %.2f\n", circleArea(radius));

    return 0;
}



float squareArea(float side) {
    return side * side;
}




float rectangleArea(float length, float width) {
    return length * width;
}




float circleArea(float radius) {
    return 3.14* radius * radius;
}
