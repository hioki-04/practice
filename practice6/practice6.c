#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    for(int i = 1; true; i++){
        num1 = sum;
        num2 = num1 + num2;
        sum = num1 + num2;
        
        if(num1 >= 1000){
            break;
        } 
        if(num2 >= 1000){
            printf("%d ", num1);
            break;
        }
        printf("%d %d ", num1, num2);
    }
    return 0;
}