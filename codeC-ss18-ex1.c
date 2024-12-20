#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    strcpy(student.name, "Trung Hieu");
    student.age = 18;
    strcpy(student.phoneNumber, "0971907761");

    printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

