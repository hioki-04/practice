#include <stdio.h>
#include <string.h>

/**
 * @file practice12.3.c
 * @brief 文字列を反転させる関数
 * @param st 文字列
 * @param stlen 文字列の長さ
 */
void stchange(char st[], int stlen){
    for(int i = 0; stlen > -1; i++){
        printf("%c", st[stlen]);
        stlen--;
    }
}

int main(void)
{
    char st[] = "ABC" ;
    int stlen = strlen(st);
    stchange(st, stlen);

}