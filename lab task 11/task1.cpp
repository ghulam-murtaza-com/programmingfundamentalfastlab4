#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

float area(struct Rectangle r) {
    return r.length * r.width;
}

float parameter(struct Rectangle r) {
    return 2 * (r.length + r.width);
}

int isvalid(struct Rectangle r) {
    return r.length > 0.0 && r.length < 20.0 && r.width > 0.0 && r.width < 20.0;
}

int main() {
    struct Rectangle R;

    printf("Enter the Rectangle length: ");
    scanf("%f", &R.length);

    printf("Enter the Rectangle width: ");
    scanf("%f", &R.width);

    if (isvalid(R)) {
        printf("\nThe Area of the Rectangle is: %.2f", area(R));
        printf("\nThe Perimeter of the Rectangle is: %.2f", parameter(R));
    } else {
        printf("\nOut of Range Dimensions");
    }

    return 0;
}
