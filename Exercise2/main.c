#include <stdio.h>

int main() {
    float width, length, perimeter, area;
    char op;

    do{
        printf("Type the width and length:");
        scanf("%f %f", &width, &length);

        area = width * length;
        perimeter = 2 * (width + length);
        printf("Area: %f", area);
        printf("\nPerimeter: %f",perimeter);

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}