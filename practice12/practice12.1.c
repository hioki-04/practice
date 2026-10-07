#include <stdio.h>

/**
 * @file practice12.1.c
 * @brief 二つの変数の値を入れ替える関数
 * @param a 1つ目の整数のアドレス
 * @param b 2つ目の整数のアドレス
 */

void change(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int a = 10;
    int b = 100;
    printf("%d->%d\n", a, b);
    change(&a, &b);
    printf("%d->%d\n", a, b);
}