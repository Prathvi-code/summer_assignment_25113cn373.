#include <stdio.h>

int main() {
    int n, i, j = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n], result[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // copy non-zero elements first
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            result[j++] = a[i];
        }
    }
    
    while (j < n) {
        result[j++] = 0;
    }

    printf("Array after moving zeroes: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}