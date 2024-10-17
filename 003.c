#include <stdio.h>

int main() {
    int i;
    int a[10] = {1, 5, 7, 3, 2, 9}; 
    int n = 6;  

    printf("Original Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    
    printf("Reversed Array: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
