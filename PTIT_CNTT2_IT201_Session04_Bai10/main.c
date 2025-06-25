#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
};

int main() {
    int check =0;
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("id: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("name: ");
        fgets(students[i].name, 20, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("age: ");
        scanf("%d", &students[i].age);
        getchar();
    }
    char find[20];
    printf("nhap ky tu can tim: ");
    fgets(find, 20, stdin);
    find[strcspn(find, "\n")] = '\0';
    char find2[20];
    for (int i = 0; find[i]; i++) {
        find2[i] = tolower(find[i]);
    }
    find2[strlen(find)] =  '\0';
    for (int i = 0; i < 5; i++) {
        char find3[20];
        strcpy(find3, students[i].name);
        for (int j = 0;find3[j]; j++) {
            find3[j] = tolower(find3[j]);
        }
        if (strstr(find3, find2) != NULL) {
            printf("id: %d\n", students[i].id);
            printf("name: %s\n", students[i].name);
            printf("age: %d\n", students[i].age);
            check = 1;
        }
    }
    if (check == 0) {
        printf("khong tim thay");
    }
    return 0;
}