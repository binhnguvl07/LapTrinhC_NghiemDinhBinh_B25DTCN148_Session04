#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap ba canh tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>0 && b>0 && c>0) {
        printf("Ba canh tren hop le.\n");
    } else {
        printf("Ba canh tren khong hop le.\n");
    }
    return 0;
}