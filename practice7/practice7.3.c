#include <stdio.h>
#include <string.h>

void stchange(char *st, int stlen){
    char *strStart = st;
    char *strEnd = st;

    while (stlen > 1)
    {
        strEnd++;
        stlen--;
    }

    while (strStart < strEnd)
    {
        char strEsc = *strStart;
        *strStart = *strEnd;
        *strEnd = strEsc;
        strStart++;
        strEnd--;
    }

    printf("%s\n", st);
    
}

int main(void)
{
    char st[] = "ABC";
    int stlen = strlen(st);
    stchange(st, stlen);

}