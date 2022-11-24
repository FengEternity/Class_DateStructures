#include<stdio.h>

void days(int m, int n);

int main() {
    int m, n;
    printf_s("Please enter the year-month in the format (2021-5):");
    scanf_s("%d-%d", &m, &n);
    days(m, n);
    return 0;
}

void days(int m, int n) {
    if (n == 4 || n == 6 || n == 8 || n == 11) {
        printf("day = 30");
    }
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 9 || n == 10 || n == 12) {
        printf("day = 31");
    }
    if (n == 2) {
        if ((m % 400 == 0) || (m % 4 == 0 && m % 100 != 0)) {
            printf("day = 29");
        } else {
            printf("day = 28");
        }
    }
}