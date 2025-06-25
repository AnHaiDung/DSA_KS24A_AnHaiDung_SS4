#include <stdio.h>

int main(void) {
    int len;
    int number;
    int check =0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("nhap so can tim: ");
    scanf("%d", &number);
    int left =0;
    int right=len-1;
    while (left <= right) {
        int mid = left + (right-left)/2;
        if (number == arr[mid]){
            printf("phan tu co trong mang" );
            check =1;
            return 1;
            left = mid + 1;
        }else if (number < arr[mid]) {
            right = mid - 1;
        }else if (number > arr[mid]) {
            left = mid + 1;
        }
    }
    if (check == 0) {
        printf("phan tu khong co trong mang" );
    }
    return 0;
}