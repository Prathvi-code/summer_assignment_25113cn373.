#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int last = a[n - 1];
    for (i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;

    printf("Array after right rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}