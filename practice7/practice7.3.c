#include <stdio.h>
#include <string.h>

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