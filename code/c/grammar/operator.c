#include <stdio.h>

// #region arithmetic
double a(double x, double y){
    double a = y++ - x++;
    double b = --x + --y;
    return ((a+b)/+2)*-10-(int)y%2+x*y;
}
// #endregion arithmetic

// #region assign
int b(int x){
    x = x+10;x %= 3;x += 5;x *= 10;x /= 2;
    return x;
}
// #endregion assign

// #region compare
// C语言因没有布尔类型，“真”用数字“1”来表示，“假”用数字“0”来表示。
int c(double a,double b){
    return a*3>b + a>=2*b + a==b/2 + a!=b + a+2<b + a+1<=b;
}
// #endregion compare

// #region logic
// 在 C 语言中，非零值被视为真，零被视为假,
int d(int a, int b){
    return a + !a + !!a + a||b + a&&b;
}
// #endregion logic

// #region bit
int e(int a, int b){
    return a & b + a | b + a ^ b + ~a + (a << 2) + (a >> 2);
}
// #endregion bit