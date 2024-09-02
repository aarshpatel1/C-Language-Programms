#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5};
    int n = 4; // Size of array
    int product = 1;

    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }

    printf("Product of array elements: %d\n", product);
    return 0;
}
