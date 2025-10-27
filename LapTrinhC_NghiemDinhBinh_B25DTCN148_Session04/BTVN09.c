#include <stdio.h>
int main() {
    int dd, mm, yyyy;
    printf("Nhap ngay, thang, nam (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yyyy);
    if (yyyy % 4 == 0 && (yyyy % 100 != 0 || yyyy % 400 == 0)) {
        // Nam nhuan
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            if (dd >= 1 && dd <= 31) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
            if (dd >= 1 && dd <= 30) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else if (mm == 2) {
            if (dd >= 1 && dd <= 29) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else {
            printf("Ngay thang nam khong hop le.\n");
        }
    } else if (yyyy % 4 != 0 || (yyyy % 100 == 0 && yyyy % 400 != 0)) {
        // Nam khong nhuan
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            if (dd >= 1 && dd <= 31) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
            if (dd >= 1 && dd <= 30) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else if (mm == 2) {
            if (dd >= 1 && dd <= 28) {
                printf("Ngay thang nam hop le.\n");
            } else {
                printf("Ngay thang nam khong hop le.\n");
            }
        } else {
            printf("Ngay thang nam khong hop le.\n");
        }
    } else {
        printf("Ngay thang nam khong hop le.\n");
    }
    return 0;
}