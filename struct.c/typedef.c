// #include<stdio.h>
// typedef int realNumber;/*it tells computer that new name is int type*/
// typedef int Integer;
// int main(){
//     Integer x = 5;
//     realNumber y = 6;/*realnumber = int*/
//     printf("%d\n",y);
//     printf("%d",x);
// }
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[15];
        float attendance;
        int roll;
    }PW,student;
    PW std1;
    PW std2;
    PW std3;
    student std4;
    std4.roll = 3;
    std1.attendance = 78.5;
    strcpy(std1.name,"Aditya Kumar");/*Only way to enter value for a string after it was intialised*/
    std1.roll = 2;
    printf("%s\n",std1.name);
    printf("%d",std4.roll);
    return 0;
}