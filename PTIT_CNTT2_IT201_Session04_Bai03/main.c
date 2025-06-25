#include <stdio.h>

int main(void) {
    int len;
    int find=0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
            find = i;
        }
    }
    printf("%d\n ", find);
    return 0;
}