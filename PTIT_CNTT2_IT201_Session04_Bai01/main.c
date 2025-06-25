#include <stdio.h>

int main(void) {
    int len;
    int number;
    int find;
    int check=0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("nhap so can tim: ");
    scanf("%d", &number);
    for (int i = 0; i < len; i++) {
        if (number == arr[i]) {
            find = i;
            check =1;
            printf(" %d\n", find);
            return 1;
        }
    }
    if (check == 0) {
        printf("khong tim thay");
    }
    return 0;
}