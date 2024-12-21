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

    int searchId;
    printf("\nNhap ID sinh vien can sua: ");
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("\nSua thong tin sinh vien thu %d:\n", students[i].id);
            printf("Ho va ten moi: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;
            printf("Tuoi moi: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien co ID %d.\n", searchId);
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

