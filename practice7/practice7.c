#include <stdio.h>

void mul(int *num){
    *num = *num * 2;
}

int main(void)
{
    int num = 10;
    mul(&num);
    printf("%d\n",num);
}