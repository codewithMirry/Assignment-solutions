#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 30, 45, 50};  // an array with 5 elements
    int key, i, found = 0;

    printf("Enter the value to search: ");
    scanf("%d", &key);  // take input value to search for

    // Linear Search
    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Value %d found at index %d.\n", key, i);
            found = 1;
            break;  // exit the loop once value is found
        }
    }

    if(found == 0) {
        printf("Value %d not found in the array.\n", key);
    }

    return 0;
}