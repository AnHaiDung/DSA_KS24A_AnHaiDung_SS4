#include <stdio.h>

int main(void) {
    int len;
    int find=0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
            find = i;
        }
    }
    printf("%d",find);
    return 0;
}