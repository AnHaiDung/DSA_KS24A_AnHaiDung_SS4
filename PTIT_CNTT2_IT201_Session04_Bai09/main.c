#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int low, int high, int number) {
    if (low >= high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (number == arr[mid]) {
        return mid;
    }else if (number > arr[mid]) {
        return binarySearch(arr, low, mid - 1, number);
    }else if (number < arr[mid]) {
        return binarySearch(arr, mid + 1, high, number);
    }
}

int main(void) {
    int len;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    int number;
    printf("nhap so can tim: ");
    scanf("%d", &number);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int check = binarySearch(arr, 0, len - 1, number);
    if (check ==-1) {
        printf("phan tu khong co trong mang");
    }else {
        printf("phan tu co trong mang");
    }
    return 0;
}