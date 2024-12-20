#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];

    printf("Nhap thong tin cua 5 sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;

        printf("\nSinh vien thu %d:\n", students[i].id);
        printf("Ho va ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", students[i].id);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

