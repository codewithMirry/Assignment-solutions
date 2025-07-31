#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // Initial array
    int size = 5;  // Current number of elements
    int pos = 2;   // Position to delete (0-based index)

    // Shift elements to the left from pos+1 to the end
    for(int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;  // Reduce array size

    // Print the updated array
    printf("Array after deletion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}