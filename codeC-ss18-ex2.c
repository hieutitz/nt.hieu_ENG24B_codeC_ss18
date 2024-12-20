#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap thong tin sinh vien:\n");
    printf("Ho va ten: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Tuoi: ");
    scanf("%d", &student.age);

    printf("So dien thoai: ");
    scanf("%s", student.phoneNumber);

    printf("\nThong tin sinh vien:\n");
    printf("Ho va ten: %s", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

