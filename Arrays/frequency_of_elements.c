Q10. Write a C program to find the frequency of each element in an array.

#include <stdio.h>
int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("Element Frequency\n");
    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d\t%d\n", arr[i], count);
    }

    return 0;
}
