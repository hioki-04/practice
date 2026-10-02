#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int sum;
    printf("3つの数値を入力せよ。\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    sum = num1 + num2 + num3;


    printf("3つの数値の合計は%dです。\n", sum);
    return 0;
}