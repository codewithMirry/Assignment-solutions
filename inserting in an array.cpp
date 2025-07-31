#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // Initial array
    int size = 5;  // Current number of elements
    int pos = 2;   // Position where we want to insert (0-based index)
    int value = 25;

    // Shift elements to the right from the end to 'pos'
    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new value
    arr[pos] = value;
    size++;  // Increase array size

    // Print the updated array
    printf("Array after insertion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}