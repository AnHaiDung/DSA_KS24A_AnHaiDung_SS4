#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
};

int main(void) {
    int len;
    int find=0;
    int check=0;
    printf("nhap so sinh vien ");
    scanf("%d", &len);
    struct Student students[len];
    for (int i = 0; i < len; i++) {
        printf("id: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("name: ");
        fgets(students[i].name, 20, stdin);
        students[i].name[strcspn(students[i].name,"\n")] = '\0';
        printf("age: ");
        scanf("%d", &students[i].age);
        getchar();
    }
    printf("nhap id can tim: ");
    scanf("%d", &find);
    for (int i = 0; i < len; i++) {
        if (find == students[i].id) {
            printf("id: %d\n", students[i].id);
            printf("name: %s\n", students[i].name);
            printf("age: %d\n", students[i].age);
            check = 1;
        }
    }
    if (check == 0) {
        printf("khong tim thay ");
    }
    return 0;
}