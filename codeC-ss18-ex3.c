#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[2];  

    printf("Nhap thong tin cua 2 sinh vien:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin); 

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ho va ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

