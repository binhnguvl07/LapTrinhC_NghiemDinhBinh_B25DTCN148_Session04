#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap ba so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a-b>0 && a-c>0) {
        if (b-c>0) {
            printf("Thu tu tang dan: %d %d %d\n", c, b, a);
        } else {
            printf("Thu tu tang dan: %d %d %d\n", b, c, a);
        }
    } else if (b-a>0 && b-c>0) {
        if (a-c>0) {
            printf("Thu tu tang dan: %d %d %d\n", c, a, b);
        } else {
            printf("Thu tu tang dan: %d %d %d\n", a, c, b);
        }
    } else if (c-a>0 && c-b>0) {
        if (a-b>0) {
            printf("Thu tu tang dan: %d %d %d\n", b, a, c);
        } else {
            printf("Thu tu tang dan: %d %d %d\n", a, b, c);
        }
    } else {
        printf("Ba so khong phai la so nguyen khac nhau.\n");
    }
    return 0;
}