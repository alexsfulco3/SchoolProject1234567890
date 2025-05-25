#include <stdio.h>

int main() {
    int i;
    printf("Enter how many elements: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("The number of elements must be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= i; ++i) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
