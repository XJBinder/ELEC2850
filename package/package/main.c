#define _CRT_SECURE_NO_WARNINGS //fix scanf warning
#include <stdio.h>

int main() {
    float weight;
    unsigned char length;
    unsigned char width;
    unsigned char height;

    printf("Please Enter Weight of Package: ");
    scanf("%f", &weight);
    printf("\nPlease Enter Length of Package: ");
    scanf("%hhd", &length);
    printf("\nPlease Enter Width of Package: ");
    scanf("%hhd", &width);
    printf("\nPlease Enter Height of Package: ");
    scanf("%hhd", &height);
    
    if (weight > 100) {
        printf("Your package is too heavy!\n");
        printf("No bigger than 100 kg please.");
    }
    else if (height > 200) {
        printf("Your Package is too tall!\n");
        printf("No taller than 200 cm please.");
    }
    else if (length > 200) {
        printf("Your Package is too long!\n");
        printf("No longer than 200 cm please.");
    }
    else if (width > 200) {
        printf("Your Package is too wide!\n");
        printf("No wider than 200 cm please.");
    }
    else {
        float shipCost = ((weight * 5) + (width * length * height * 1.2));
        printf("\nPackage Specs\nLength: %d cm\nWidth: %d cm\nHeight: %d cm\nWeight: %.02f kg\nThe shipping cost for your package is %.2f\n", length, width, height, weight, shipCost);
    }

    return 0;
}