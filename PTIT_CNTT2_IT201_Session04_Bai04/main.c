#include <stdio.h>

int main(void) {
    int len;
    int number;
    int find=0;
    int check=0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("nhap so can tim: ");
    scanf("%d", &number);
    for (int i = 0; i < len; i++) {
        if (arr[i] == number) {
            find = i;
            check =1;
        }
    }
    if (check == 1) {
        printf("%d", find);
    }else {
        printf("khong tim thay");
    }
    return 0;
}