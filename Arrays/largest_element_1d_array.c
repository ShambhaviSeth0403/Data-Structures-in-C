ARRAYS (1D & 2D)
Q1. Write a C program to find the largest element in a 1D array.
#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest element: %d", max);
    return 0;
}
