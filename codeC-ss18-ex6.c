#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void inDanhSach(struct Student students[], int n);

int main() {
    struct Student students[50] = {
        {
            1,
            "Le Thao Phuong",
            18,
            "0978123456"
        },
        {
            2,
            "Trinh Cao Cuong",
            20,
            "0912456789"
        },
        {
            3,
            "Nguyen Hoang Nam",
            22,
            "0987654321"
        },
        {
            4,
            "Pham Gia Huy",
            23,
            "0934567890"
        },
        {
            5,
            "Tran Thi Thu Ha",
            19,
            "0901234567"
        }
    };
    int n = 5;

    inDanhSach(students, n);

    printf("\nNhap thong tin sinh vien moi:\n");
    students[n].id = n + 1;
    printf("Ho va ten: ");
    getchar();
    fgets(students[n].name, sizeof(students[n].name), stdin);
    students[n].name[strcspn(students[n].name, "\n")] = 0;
    printf("Tuoi: ");
    scanf("%d", &students[n].age);
    printf("So dien thoai: ");
    scanf("%s", students[n].phoneNumber);
    n++;

    inDanhSach(students, n);

    return 0;
}

void inDanhSach(struct Student students[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", students[i].id);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }
}

