#include <stdio.h>

int main() {
    int n, i, len = 1, maxLen = 1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 1; i < n; i++) {
        if(A[i] > A[i-1]) {
            len++;
        } else {
            if(len > maxLen)
                maxLen = len;
            len = 1;
        }
    }
    if(len > maxLen)
        maxLen = len;

    printf("Length  = %d\n", maxLen);

    return 0;
}
