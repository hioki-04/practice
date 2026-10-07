#include <stdio.h>
/**
 * @file practice12.2.c
 * @brief 渡された文字列を出力する関数
 * @param st 文字列
 * 
 */
void stout(char st[]){
    printf("%s\n", st);
}

int main(void)
{
    char st[] = "mojiretu" ;
    stout(st);
}