#include <stdio.h>
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n<0) {
        printf("So am");
    } else if (n==0) {
        printf("So khong");
    } else {
        printf("So duong");
    }
    return 0;
}