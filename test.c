//////#include<stdio.h>
//////
//////void days(int m, int n);
//////
//////int main() {
//////    int m, n;
//////    printf_s("Please enter the year-month in the format (2021-5):");
//////    scanf_s("%d-%d", &m, &n);
//////    days(m, n);
//////    return 0;
//////}
//////
//////void days(int m, int n) {
//////    if (n == 4 || n == 6 || n == 8 || n == 11) {
//////        printf("day = 30");
//////    }
//////    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 9 || n == 10 || n == 12) {
//////        printf("day = 31");
//////    }
//////    if (n == 2) {
//////        if ((m % 400 == 0) || (m % 4 == 0 && m % 100 != 0)) {
//////            printf("day = 29");
//////        } else {
//////            printf("day = 28");
//////        }
//////    }
//////}
////
//////#include <stdio.h>
//////int main()
//////{
//////    int year,month,day,leapyear;
//////    while(scanf("%d %d\n",&year,&month)!=EOF)
//////    {
//////        leapyear=year%4==0&&year%100!=0||year%400==0;
//////        switch(month)
//////        {
//////            case 1:
//////            case 3:
//////            case 5:
//////            case 7:
//////            case 8:
//////            case 10:
//////            case 12:day=31;break;
//////            case 4:
//////            case 6:
//////            case 9:
//////            case 11:day=30;break;
//////            case 2:day=28+leapyear;break;
//////        }
//////        printf("%d\n",day);
//////    }
//////    return 0;
//////}
////
////#include <stdio.h>
////#include <math.h>
////
////int check_a(double a);
////
////double delta(double a, double b, double c);
////
////void output_root(int k, double a, double b, double d);
////
////int root(double d);
////
////int main() {
////    double a, b, c;
////    printf("Input three numbers to represent the coefficients of the quadratic equation with one variable\n");
////    scanf("%lf %lf %lf", &a, &b, &c);
////    if (check_a(a) == 0) printf("It's not a quadratic equation with one variable\n");
////    else output_root(root(delta(a, b, c)), a, b, delta(a, b, c));
////    return 0;
////}
////
////// 根据a是否等于0判断是否是二元一次方程
////int check_a(double a) {
////    if (a == 0) return 0;
////    else return 1;
////}
////
////// 计算判别式b*b-4ac
////double delta(double a, double b, double c) {
////    double d;
////    d = b * b - 4 * a * c;
////    return d;
////}
////
////// 判断根的情况
////int root(double d) {
////    if (d == 0) {
////        printf("The equation has two identical real roots\n");
////        return 0;
////    } else if (d > 0) {
////        printf("The equation has two different real roots\n");
////        return 1;
////    } else {
////        printf("The equation has no real roots\n");
////        return -1;
////    }
////}
////
////// 根据不同的情况，输出根
////void output_root(int k, double a, double b, double d) {
////    double x1, x2;
////    if (k == 1) {
////        x1 = -b / (2 * a) + sqrt(d) / (2 * a);
////        x2 = -b / (2 * a) - sqrt(d) / (2 * a);
////        printf("x1=%lf ", x1);
////        printf("x2=%lf\n", x2);
////    }
////    if (k == 0) {
////        x1 = x2 = -b / (2 * a);
////        printf("x1=x2=%lf\n", x1);
////    }
////    if (k == -1) {
////        printf("x1=%lf+%lfi ", -b / (2 * a), sqrt(-d) / (2 * a));
////        printf("x2=%lf-%lfi\n", -b / (2 * a), sqrt(-d) / (2 * a));
////    }
////}
//
///*每行8个的形式输出100-999内的质数*/
//#include<stdio.h>
//#include<math.h>
//
//int judge_prime(int n);
//
//int main() {
//    int n = 100, judge, c = 1;
//    for (n; n < +999; n++) {
//        judge = judge_prime(n);
//        if (judge != 0) {
//            printf("%4d", n);
//            if (c % 8 == 0) {
//                printf("\n");
//            }
//            c++;
//        }
//    }
//    return 0;
//}
//
//int judge_prime(int n) {
//    int judge = 1;
//    if (n >= 2) {
//        int k, m;
//        k = (int) sqrt(n);
//        for (m = 2; m <= k; m++) {
//            if (n % m == 0) {
//                judge = 0;
//            }
//        }
//    }
//    return judge;
//}

