#include <stdio.h>

int main() {
    int n, i;
    float avg;
    int sum = 0;
    int arr[100]; // Maximum 100 elements
    int total = 0;

    printf("Enter a number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i]; // Pehle total nikalna
    }

    // Average calculate(Typecasting to float)
    avg = (float)total / n;

  //check which number is greater than average
    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            sum += arr[i];
        }
    }

    printf("Average of array = %.2f\n", avg);
    printf("Sum of elements greater than average = %d\n", sum);

    return 0;
}
