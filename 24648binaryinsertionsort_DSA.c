#include <stdio.h>

// Binary search function for find position
int binarySearch(int a[], int item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == a[mid])
            return mid + 1;
        if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// Binary Insertion Sort Function
void binaryInsertionSort(int a[], int n) {
    int i, loc, j, selected;

    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];

        // Binary search for find position
        loc = binarySearch(a, selected, 0, j);

        // Elements shifting
        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

int main() {
    int arr[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88};
    int n = sizeof(arr) / sizeof(arr[0]);

    binaryInsertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Space added for readability
    }
    printf("\n");

    return 0;
}
