#include <stdio.h>
#include <string.h>

struct student 
{
    char *name;
    int point;
};

void SortName(struct student n[]){

    printf("■名前順■\n");
    printf("名前:点数\n");

    for(int number = 0; number < 6; number++){
        for(int count = number + 1; count < 6; count++){
            struct student temp;
    
            if(strcmp(n[number].name, n[count].name) < 0){
                    //負の値の時、第一引数の方が前
                }else if(strcmp(n[number].name, n[count].name) > 0){
                    //正の値の時、第二引数の方が前 入れ替え
                    temp = n[number];
                    n[number] = n[count];
                    n[count] = temp;
                }
        }
        printf("%s:%d\n",n[number].name,n[number].point);
    } 
}

void SortPoint(struct student n[]){

    printf("■成績順■\n");
    printf("名前:点数\n");

    for(int number = 0; number < 6; number++){
        for(int count = number + 1; count < 6; count++){
            struct student temp;
    
            if(n[number].point > n[count].point){
            
            }else if (n[number].point == n[count].point){
                if(strcmp(n[number].name, n[count].name) < 0){
                    //負の値の時、第一引数の方が前
                }else if(strcmp(n[number].name, n[count].name) > 0){
                    //正の値の時、第二引数の方が前 入れ替え
                    temp = n[number];
                    n[number] = n[count];
                    n[count] = temp;
            }
            // 入れ替え
            }else if (n[number].point < n[count].point){
                temp = n[number];
                n[number] = n[count];
                n[count] = temp;
            }
        }
        printf("%s:%d\n",n[number].name,n[number].point);
    } 
}

int main(void)
{
    struct student test[6];
    
    test[0].name = "sara";
    test[0].point = 88;

    test[1].name = "gintonic";
    test[1].point = 12;

    test[2].name = "aida";
    test[2].point = 44;

    test[3].name = "yankoro";
    test[3].point = 35;

    test[4].name = "kumazaki";
    test[4].point = 44;

    test[5].name = "onizuka";
    test[5].point = 93;

    SortName(test);

    SortPoint(test);

}