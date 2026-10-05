#include <stdio.h>

void stout(char st[]){
    printf("%s\n", st);
}

int main(void)
{
    char st[] = "mojiretu" ;
    stout(st);
}