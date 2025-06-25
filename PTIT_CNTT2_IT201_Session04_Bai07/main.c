#include <stdio.h>

int main(void) {
    int len;
    int check = 0;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < len/2; i++) {
        for (int j = len-1; j >= len/2; j--) {
            if (arr[i] == arr[j]) {
                printf("cap doi xung: (%d,%d) ", arr[i],arr[j]);
                check=1;
            }
        }
    }
    if (check == 0) {
        printf("khong co cap doi xung");
    }
    return 0;
}