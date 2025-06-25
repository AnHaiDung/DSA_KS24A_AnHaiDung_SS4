#include <stdio.h>

int main(void) {
    int len;
    int number=0;
    int check=0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("nhap so muon tim");
    scanf("%d", &number);
    for (int i = 0; i < len; i++) {
        if (arr[i] == number) {
            printf("%d\n", i);
            check =1;
        }
    }
    if (check == 0) {
        printf("khong tim thay\n");
    }
    return 0;
}