#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void inDanhSach(struct Student students[], int n);
int xoaSinhVien(struct Student students[], int n, char name[]);

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

    char nameToDelete[50];
    printf("\nNhap ten sinh vien can xoa: ");
    getchar();
    fgets(nameToDelete, sizeof(nameToDelete), stdin);
    nameToDelete[strcspn(nameToDelete, "\n")] = 0;

    int newSize = xoaSinhVien(students, n, nameToDelete);
    if (newSize == n) {
        printf("\nKhong tim thay sinh vien co ten \"%s\".\n", nameToDelete);
    } else {
        n = newSize;
        printf("\nDa xoa sinh vien \"%s\".\n", nameToDelete);
    }

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

int xoaSinhVien(struct Student students[], int n, char name[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            for (int j = i; j < n - 1; j++) {
                students[j] = students[j + 1];
            }
            return n - 1;
        }
    }
    return n;
}

