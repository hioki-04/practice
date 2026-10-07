
#include <stdio.h>

/**
 * @file practice12.c
 * @brief 変数の値を倍にする関数
 * @param num 整数のアドレス
 * 
 */

void mul(int *num){
    *num = *num * 2;
}

int main(void)
{
    int num = 10;
    mul(&num);
    printf("%d\n",num);
}