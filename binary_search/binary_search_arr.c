#include <stdio.h>
#define NMAX 10

int binary_search(int arr[NMAX], int target);

int main() {
    int arr[NMAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int res = binary_search(arr, 4);

    printf("%d", res);

    return 0;
}

int binary_search(int arr[NMAX], int target) {
    int low = 0;
    int high = NMAX - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}