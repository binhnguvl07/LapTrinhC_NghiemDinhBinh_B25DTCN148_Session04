#include <stdio.h>
int main() {
    int yyyy, average_score;
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &yyyy);
    printf("Nhap diem trung binh cua ban: ");
    scanf("%d", &average_score);
    if (1900 < yyyy && yyyy < 2025) {
        if (average_score <5.0) {
            printf("THONG TIN SINH VIEN\n");
            printf("Nam sinh: %d\n", yyyy);
            printf("Tuoi: %d\n", 2025 - yyyy);
            printf("Xep loai: Yeu\n");
        } else if (5.0 <= average_score && average_score <6.5) {
            printf("THONG TIN SINH VIEN\n");
            printf("Nam sinh: %d\n", yyyy);
            printf("Tuoi: %d\n", 2025 - yyyy);
            printf("Xep loai: Trung Binh\n");
        } else if (6.5 <= average_score && average_score <8.0) {
            printf("THONG TIN SINH VIEN\n");
            printf("Nam sinh: %d\n", yyyy);
            printf("Tuoi: %d\n", 2025 - yyyy);
            printf("Xep loai: Kha\n");
        } else if (8.0 <= average_score && average_score <=10.0) {
            printf("THONG TIN SINH VIEN\n");
            printf("Nam sinh: %d\n", yyyy);
            printf("Tuoi: %d\n", 2025 - yyyy);
            printf("Xep loai: Gioi\n");
        } else {
            printf("Diem trung binh khong hop le.\n");
        }
    } else {
        printf("Nam sinh khong hop le.\n");
    }
    return 0;  
}