#include <stdio.h>
#include <string.h>

struct student 
{
    char *name;
    int point;
};

void SortName(struct student n[], int student_count){

    printf("■名前順■\n");
    printf("名前:点数\n");

    for(int number = 0; number < student_count; number++){
        for(int count = number + 1; count < student_count; count++){
            struct student temp;          
            int strcmp_res = strcmp(n[number].name, n[count].name);
            if(strcmp_res < 0){
                    //負の値の時、第一引数の方が前
                }else if(strcmp_res > 0){
                    //正の値の時、第二引数の方が前 入れ替え
                    temp = n[number];
                    n[number] = n[count];
                    n[count] = temp;
                }
        }
        printf("%s:%d\n",n[number].name,n[number].point);
    } 
}

void SortPoint(struct student n[], int student_count){

    printf("■成績順■\n");
    printf("名前:点数\n");

    for(int number = 0; number < student_count; number++){
        for(int count = number + 1; count < student_count; count++){
            struct student temp;
    
            if(n[number].point > n[count].point){
            
            }else if (n[number].point == n[count].point){
                int strcmp_res = strcmp(n[number].name, n[count].name);
                if(strcmp_res < 0){
                    //負の値の時、第一引数の方が前
                }else if(strcmp_res > 0){
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
    struct student test[] = {
        {"sara", 88},
        {"gintonic", 12},
        {"aida", 44},
        {"yankoro", 35},
        {"kumazaki", 44},
        {"onizuka", 93}
    };

    int student_count = sizeof(test) / sizeof(test[0]);

    SortName(test, student_count);

    SortPoint(test, student_count);

}