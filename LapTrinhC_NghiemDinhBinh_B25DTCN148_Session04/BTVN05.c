#include <stdio.h>
int main() {
    int dau, cuoi, sodien, tien;
    printf("Nhap chi so dien dau thang: ");
    scanf("%d", &dau);
    printf("Nhap chi so dien cuoi thang: ");
    scanf("%d", &cuoi);
    sodien = cuoi - dau;
    if (0 <= sodien && sodien <50) {
        tien = sodien * 10000;
        printf("So dien tieu thu: %d\n", sodien);
        printf("Tien dien phai tra: %d VND\n", tien);
    } else if (50 <= sodien && sodien <100) {
        tien = sodien * 15000;
        printf("So dien tieu thu: %d\n", sodien);
        printf("Tien dien phai tra: %d VND\n", tien);
    } else if (100 <= sodien && sodien < 150) {
        tien = sodien * 20000;
        printf("So dien tieu thu: %d\n", sodien);
        printf("Tien dien phai tra: %d VND\n", tien);
    } else if (150 <= sodien && sodien <200) {
        tien = sodien * 25000;
        printf("So dien tieu thu: %d\n", sodien);
        printf("Tien dien phai tra: %d VND\n", tien);
    } else if (sodien >= 200) {
        tien = sodien * 30000;
        printf("So dien tieu thu: %d\n", sodien);
        printf("Tien dien phai tra: %d VND\n", tien);
    } else {
        printf("Chi so dien khong hop le.\n");
    }
    return 0;
}