#include <stdio.h>

int main() {
    int arr[] = {10,30,20,50,40};
    int n = 5, temp;// FIX:declare temp properly

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = -1;// restart loop(logic)
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
