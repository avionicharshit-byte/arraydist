#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Points (x,y) where no value 'z' exists between them:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int flag = 1; 
            for (int k = i+1; k < j; k++) {
                if (arr[k] > arr[i] && arr[k] < arr[j]) {
                    flag = 0; // 'z' exists between x and y
                    break;
                }
            }
            if (flag) { // no value 'z' exists between x and y
                printf("(%d,%d) Distance: %d\n", arr[i], arr[j], arr[j]-arr[i]);
            }
        }
    }

    return 0;
}
