#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    while (num1 <= 1000)
    {
        printf("%d ", num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return 0;
}